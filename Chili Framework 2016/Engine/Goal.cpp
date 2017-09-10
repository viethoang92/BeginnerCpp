#include "Goal.h"

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
