#pragma once
#include "framework.h"

void DrawCircle(HDC hdc, POINT pos, int radius)
{
	int x1 = pos.x - radius;
	int y1 = pos.y - radius;
	int x2 = pos.x + radius;
	int y2 = pos.y + radius;
	Ellipse(hdc, x1, y1, x2, y2);
}