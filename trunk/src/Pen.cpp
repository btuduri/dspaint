#include <PA9.h>

#include "Pen.h"

namespace DSPaint
{
    Pen::Pen(u16 colour)
	{
	    this->SetColour(colour);
	}

	Pen::~Pen()
	{
	}

	int Pen::GetWidth()
	{
		return this->_width;
	}

	void Pen::SetWidth(s8 width)
	{
		this->_width = width;
	}

	u16 Pen::GetColour()
	{
		return this->_colour;
	}

	void Pen::SetColour(u16 colour)
	{
		this->_colour = colour;
	}

	void Pen::Draw(Canvas canvas, s16 x, s16 y)
	{
		canvas.SetPixel(x, y, this->_colour);
	}

	void Pen::DrawLine(Canvas canvas, s16 x1, s16 y1, s16 x2, s16 y2)
	{
		PA_Draw16bitLineEx(ACTIVE_SCREEN, x1, y1, x1, y2, _colour, _width);
		// currently does not work at the moment as it needs a lot of code rewrite
//		int w = _width;
//		s8 low = (w >> 1) - w + 1;
//		s8 high = (w >> 1) + 1;
//		s16 i, j;
//		s16 xx1, xx2, yy1, yy2;
//
//		for (i = low; i < high; i++){
//			for (j = low; j < high; j++){
//				if ((x1 + i >= 0) && (y1 + j >= 0) && (x1 + i < 256) && (y1 + j < 192)){
//					//PA_Put16bitPixel(ACTIVE_SCREEN, x1 + i, y1 + j, _colour);
//					canvas.SetPixel(x1 + 1, y1 + 1, _colour);
//				}
//			}
//		}
//
//
//		for (i = low; i < high; i++){
//			j = low;
//			xx1 = x1+i; xx2 = x2+i; yy1 = y1+j; yy2 = y2+j;
//			while(xx1 < 0) xx1++;	while(xx1 > 255) xx1--;
//			while(xx2 < 0) xx2++;	while(xx2 > 255) xx2--;
//			while(yy1 < 0) yy1++;	while(yy1 > 191) yy1--;
//			while(yy2 < 0) yy2++;	while(yy2 > 191) yy2--;
//			PA_Draw16bitLine(ACTIVE_SCREEN, xx1, yy1, xx2, yy2, _colour);
//
//			j = high-1;
//			xx1 = x1+i; xx2 = x2+i; yy1 = y1+j; yy2 = y2+j;
//			while(xx1 < 0) xx1++;	while(xx1 > 255) xx1--;
//			while(xx2 < 0) xx2++;	while(xx2 > 255) xx2--;
//			while(yy1 < 0) y1++;	while(yy1 > 191) yy1--;
//			while(yy2 < 0) yy2++;	while(yy2 > 191) yy2--;
//			PA_Draw16bitLine(ACTIVE_SCREEN, xx1, yy1, xx2, yy2, _colour);
//		}
//
//		for (j = low; j < high; j++){
//			i = low;
//			xx1 = x1+i; xx2 = x2+i; yy1 = y1+j; yy2 = y2+j;
//			while(xx1 < 0) xx1++;	while(xx1 > 255) xx1--;
//			while(xx2 < 0) xx2++;	while(xx2 > 255) xx2--;
//			while(yy1 < 0) yy1++;	while(yy1 > 191) yy1--;
//			while(yy2 < 0) yy2++;	while(yy2 > 191) yy2--;
//			PA_Draw16bitLine(ACTIVE_SCREEN, xx1, yy1, xx2, yy2, _colour);
//			i = high-1;
//			xx1 = x1+i; xx2 = x2+i; yy1 = y1+j; yy2 = y2+j;
//			while(xx1 < 0) xx1++;	while(xx1 > 255) xx1--;
//			while(xx2 < 0) xx2++;	while(xx2 > 255) xx2--;
//			while(yy1 < 0) yy1++;	while(yy1 > 191) yy1--;
//			while(yy2 < 0) yy2++;	while(yy2 > 191) yy2--;
//			PA_Draw16bitLine(ACTIVE_SCREEN, xx1, yy1, xx2, yy2, _colour);
//		}
	}
}
