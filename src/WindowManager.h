#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H

#include <stdarg.h>
#include "woopsi.h"
#include "Constants.h"

namespace DSPaint
{
    class WindowManager : public WoopsiUI::Woopsi, public WoopsiUI::EventHandler
    {
        private:
            int buttonReturn;

        public:
            void startup();
            void shutdown();

            /**
             * Displays a message box with buttons.
             * @message The message to display.
             * @... A list of char* for the buttons up to a limit of 8.
             * @return A int between 1 and the number of arguments inclusive. 0 represents no answer.
             */
            int ShowMessageBox(const char* message, ...);

            bool handleEvent(const WoopsiUI::EventArgs& e);
    };
}
#endif
