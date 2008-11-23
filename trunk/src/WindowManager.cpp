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

    int WindowManager::ShowMessageBox(const char* message, int args, ...)
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
    	va_list buttons;
    	int height = 4;

    	va_start(buttons, args);
    	for (int i = 0; i < args; i++)
    	{
    		Button *b = new Button(160, height, 92, 20, va_arg(buttons, char*));
    		window->addGadget(b);

    		height += 22;
    	}
    	va_end(buttons);

        enableDrawing();

        draw();

		return 0;
    }
}
