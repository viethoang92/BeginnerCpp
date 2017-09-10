#include "Goal.h"

Goal::Goal(int in_x, int in_y)
	:
	x(in_x),
	y(in_y)
{}

bool Goal::TestCollision(const Dude & dude) const
{
	const int dudeRight = dude.GetX() + dude.GetWidth();
	const int dudeBottom = dude.GetY() + dude.GetHeight();
	const int pooRight = x + dimension;
	const int pooBottom = y + dimension;

	return
		dudeRight >= x &&
		dude.GetX() <= pooRight &&
		dudeBottom >= y &&
		dude.GetY() <= pooBottom;
}

void Goal::Respawn(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

void Goal::UpdateColor()
{
	if (colorIncreasing)
	{
		if (c.GetR() >= 253)
		{
			colorIncreasing = false;
		}
		else
		{
			c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
		}
	}
	else
	{
		if (c.GetR() <= 127)
		{
			colorIncreasing = true;
		}
		else
		{
			c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
		}
	}
}