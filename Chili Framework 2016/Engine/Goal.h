#pragma once
#include "Graphics.h"
#include "Dude.h"

class Goal
{
public:
	Goal( int in_x, int in_y )
		:
		x (in_x),
		y( in_y )
	{}
	void Draw(Graphics& gfx) const
	{
		gfx.DrawRectDim(x, y, dimension, dimension, c);
	}
	bool TestCollision(const Dude& dude) const; //mutates variables, but only reads Dude
	void Respawn(int in_x, int in_y)
	{
		x = in_x;
		y = in_y;
	}
private:
	static constexpr int dimension = 20;
	static constexpr Color c = Colors::Red;
	int x;
	int y;
};