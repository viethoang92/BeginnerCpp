#pragma once
#include "Graphics.h"
#include "Dude.h"

class Goal
{
public:
	Goal(int in_x, int in_y);
	void Draw(Graphics& gfx) const
	{
		gfx.DrawRectDim(x, y, dimension, dimension, c);
	}
	bool TestCollision(const Dude& dude) const; //mutates variables, but only reads Dude
	void Respawn(int in_x, int in_y);
	void UpdateColor();
private:
	static constexpr int dimension = 20;
	Color c = { 127, 0, 0 };
	bool colorIncreasing = true;
	int x;
	int y;
};