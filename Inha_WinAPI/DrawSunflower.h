#pragma once
#define _USE_MATH_DEFINES

#include "DrawCircle.h"
#include <math.h>

void DrawSunflower(HDC hdc, POINT pos, int radius, int cnt)
{
	DrawCircle(hdc, pos, radius);

	double angle = 360 / cnt * (M_PI /180);
	double tempRadius = (radius * sin(angle / 2)) / (1 - sin(angle / 2));

	POINT tempPos;
	for (int i = 0; i < cnt; i++)
	{
		tempPos.x = pos.x + (radius + tempRadius) * (cos(angle * i));
		tempPos.y = pos.y + (radius + tempRadius) * (sin(angle * i));
		DrawCircle(hdc, tempPos, tempRadius);
	}
}