#pragma once
#define _USE_MATH_DEFINES

#include "framework.h"
#include <math.h>

void DrawStar(HDC hdc, POINT pos, int radius)
{
	POINT temp[10];

	double angle = 540 / 15 * (M_PI / 180);

	for (int i = 0; i < 10; i+=2)
	{
		temp[i].x = pos.x + radius * cos(i * angle);
		temp[i].y = pos.y + radius * sin(i * angle);
	}
	for (int i = 1; i < 10; i += 2)
	{
		temp[i].x = pos.x + radius / 2 * cos(i * angle);
		temp[i].y = pos.y + radius / 2 * sin(i * angle);
	}

	Polygon(hdc, temp, 10);
}