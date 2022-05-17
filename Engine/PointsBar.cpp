#include "PointsBar.h"

void PointsBar::PointsCollected()
{
	width += 10;
}

void PointsBar::Draw(Graphics& gfx)
{
	for (int i = x; i < x + width; i++)
	{
		for (int j = y; j < y + height; j++)
		{
			gfx.PutPixel(i, j, Colors::Blue);
		}	
	}
}
