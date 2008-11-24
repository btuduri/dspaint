#include "WindowManager.h"
#include "woopsiheaders.h"

using namespace WoopsiUI;

namespace DSPaint
{
    void WindowManager::startup()
    {
        // Call base startup method
        Woopsi::startup();

        // Create screen
        Screen* screen = new Screen("Hello World Screen", 0);
        woopsiApplication->addGadget(screen);

        // Add window
        Window* window = new Window(0, 13, 256, 179, "Hello World Window", 0);
        screen->addGadget(window);

        //button1 = new Button(100, 100, 80, 20, "OK");
       // window->addGadget(button1);

        // Get available area within window
        //Gadget::Rect rect;
       // window->getClientRect(rect);

        // Add textbox
       // TextBox* textbox = new TextBox(rect.x, rect.y, rect.width, rect.height, "Hello World!");
        //window->addGadget(textbox);

        // Ensure Woopsi can draw itself
        enableDrawing();

        // Draw GUI
        draw();
    }

    void WindowManager::shutdown()
    {
        // Call base shutdown method
        Woopsi::shutdown();
    }

    int WindowManager::ShowMessageBox(const char* message, ...)
    {
    	Woopsi::startup();

    	Screen* screen = new Screen("", 0);
        woopsiApplication->addGadget(screen);

        Window* window = new Window(0, 0, NDS_SCREEN_MAX_WIDTH, NDS_SCREEN_MAX_HEIGHT, "", 0);
        screen->addGadget(window);

        Gadget::Rect rect;
        window->getClientRect(rect);

        MultiLineTextBox* textbox = new MultiLineTextBox(4, 4, 152, NDS_SCREEN_MAX_HEIGHT - 8, message, 1, 16);
        window->addGadget(textbox);

		// dynamically add buttons
		// store stuff for later on
    	va_list buttons;
    	int height = 4;
    	char* c;
    	int i = 0;

		// start the list
    	va_start(buttons, message);

		// make sure the va_arg contains something
		// and the buttons dont exceed 8
    	while ((c = va_arg(buttons, char*)) != NULL && i++ < 8)
    	{
    		// add buttons to dialog
    		Button* b = new Button(160, height, 92, 20, c);
    		b->setRefcon(i);
    		b->setEventHandler(this);
    		window->addGadget(b);

    		height += 22;
    	}

		// end the list
    	va_end(buttons);

        enableDrawing();

        draw();

		return buttonReturn;
    }

    bool WindowManager::handleEvent(const EventArgs& e)
    {
        this->buttonReturn = e.gadget->getRefcon();
        return true;
    }
}
