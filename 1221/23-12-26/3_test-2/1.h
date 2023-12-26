#pragma once
class Rect
{
public:
	Rect(int w, int h) { width = w, height = h; }
	int getWidth() { return width; }
	int getHeight() { return height; }
	int getArea() { return width * height; }

private:
	int width, height;
};