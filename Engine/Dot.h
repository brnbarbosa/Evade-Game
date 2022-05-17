#pragma once

#include "Graphics.h"
#include "Dude.h"

class Dot
{
public:
	Dot(int initialX, int initialY);
	void NewPosition(int newX, int newY);
	bool Collided(const Dude& dude);
	void Draw(Graphics& gfx) const;
private:
	int x;
	int y;
	static constexpr int width = 20;
	static constexpr int height = 20;
};
