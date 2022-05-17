#include "Dot.h"


Dot::Dot(int initialX, int initialY)
{
	x = initialX;
	y = initialY;
}

void Dot::NewPosition(int newX, int newY)
{
	x = newX;
	y = newY;
}

bool Dot::Collided(const Dude& dude)
{
	const int duderight = dude.GetX() + dude.GetWidth();
	const int dudebottom = dude.GetY() + dude.GetHeight();
	const int dotright = x + width;
	const int dotbottom = y + height;

	if (duderight >= x &&
		dude.GetX() <= dotright &&
		dudebottom >= y &&
		dude.GetY() <= dotbottom)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Dot::Draw(Graphics& gfx) const
{

	for (int i = x; i < x + width; i++)
	{
		for (int j = y; j < y + height; j++)
		{
			gfx.PutPixel(i, j, Colors::Red);
		}
	}
}