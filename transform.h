#pragma once
#include"shape.h"

class transform_line
{
public:
	transform_line(const Line& sh);
	Line shift(int m, int n, int k);
	Line scaleX(int a);
	Line scaleY(int d);
	Line scaleZ(int e);
	Line scale(int s);

private:
	Line shape;
};

class transform_sqr
{
public:
	transform_sqr(const Sqr& sh);
	Sqr shift(int m, int n, int k);
	Sqr scaleX(int a);
	Sqr scaleY(int d);
	Sqr scaleZ(int e);
	Sqr scale(int s);

private:
	Sqr shape;
};

class transform_cube
{
public:
	transform_cube(const Cube& sh);
	Cube shift(int m, int n, int k);
	Cube scaleX(int a);
	Cube scaleY(int d);
	Cube scaleZ(int e);
	Cube scale(int s);

private:
	Cube shape;
};

