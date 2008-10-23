#ifndef CANVAS
#define CANVAS

namespace DSPaint
{
    class Canvas
    {
        private:
        int backgroundColour;

        public:
        int* GetDimensions(int* array);
        int GetBackgroundColour();
        void SetBackgroundColour(int backgroundColour);
    };
}
#endif
