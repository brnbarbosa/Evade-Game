#pragma once

#include "Graphics.h"

class PointsBar
{
public:
	void PointsCollected();
	void Draw(Graphics& gfx);
private:
	const int x = 10;
	const int y = 10;
	const int height = 10;
	int width = 10;
};
