#pragma once
#include <math.h>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>
using std::istream;
class Vector
{
public:
	Vector(double x, double y, double z);
	Vector(Vector &v);
	void setVector(double x, double y, double z);
	void setVector(Vector &v);

	double getDotProduct(Vector v1, Vector v2);
	Vector getUnitVector(double x, double y, double z);
	double getMagnitude();
	double getMagnitude(double x, double y, double z);
	double getX();
	double getY();
	double getZ();

	std::string getVector();
	void printVecComponents();

	Vector &equals(Vector &v);
	bool operator==(const Vector &v);
	Vector &operator=(Vector &v);
	Vector &operator*=(Vector &v);
	double &operator*(Vector &v);
	Vector &operator*=(double scalar);

	friend std::ostream &operator<<(std::ostream &output, Vector &v);
	friend istream &operator >> (istream &input, Vector &v);
private:
	double magnitude;
	double x;
	double y;
	double z;
};

