namespace DSPaint
{
	class IPen
	{
		protected:
			int _width;
			int _colour;

		public:
			virtual int GetWidth() = 0;
			virtual void SetWidth(int width) = 0;
			virtual int GetColour() = 0;
			virtual void SetColour(int colour) = 0;
	};
}
