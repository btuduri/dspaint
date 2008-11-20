#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H

#include "woopsi.h"

namespace DSPaint
{
    class WindowManager : public WoopsiUI::Woopsi
    {
        public:
            void startup();
            void shutdown();
            void ShowMessageBox();
    };
}
#endif
