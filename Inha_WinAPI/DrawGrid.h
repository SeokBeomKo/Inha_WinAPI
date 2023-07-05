#pragma once
#include "framework.h"


void DrawGrid(HDC hdc, POINT center, int width, int height, int count = 0)
{
	// ³× ²ÀÁþÁ¡ÁÂÇ¥ ±¸ÇÏ±â
	int x1 = center.x - width / 2;
	int y1 = center.y - height / 2;
	int x2 = center.x + width / 2;
	int y2 = center.y + height / 2;

	int i = 0;

	int w = width / count;
	int h = height / count;

	for (i = 0; i <= height; i+= h)
	{
		MoveToEx(hdc, x1 + i, y1, NULL);
		LineTo(hdc, x1 + i, y2);
	}
	for (i = 0; i <= width; i+= w)
	{
		MoveToEx(hdc, x1, y1 + i, NULL);
		LineTo(hdc, x2, y1 + i);
	}
}

