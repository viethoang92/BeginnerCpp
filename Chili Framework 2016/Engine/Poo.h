#pragma once

class Poo
{
public:
	void Update();
	void ProcessConsumption(int dudeX, int dudeY, int dudeWidth, int dudeHeight);
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool isEaten = false;
};