#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H

#include <stdarg.h>
#include "woopsi.h"
#include "Constants.h"

namespace DSPaint
{
    class WindowManager : public WoopsiUI::Woopsi
    {
        public:
            void startup();
            void shutdown();
            int ShowMessageBox(const char* message, int args, ...);
    };
}
#endif
