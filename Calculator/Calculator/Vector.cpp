#include "Vector.h"

Vector::Vector()
{
	this->setVector(1, 1, 1);
}

Vector::Vector(double x, double y, double z)
{
	this->setVector(x, y, z);
}

Vector::Vector(Vector &v)
{
	this->setVector(v);
}

void Vector::setVector(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	magnitude = getMagnitude(x, y, z);

}

void Vector::setVector(Vector & v)
{
	this->setVector(v.getX(), v.getY(), v.getZ());
}

double Vector::getMagnitude()
{
	return magnitude;
}

double Vector::getDotProduct(Vector v1, Vector v2)
{
	return ((v1.getX() * v2.getX()) + (v1.getY() + v2.getY()) + (v1.getZ() + v2.getZ()));
}

Vector Vector::getCrossProduct(Vector v1, Vector v2)
{
	Vector newVector(((v2.z*v1.y) - (v1.z*v2.y)), -((v1.x*v2.z) - (v2.x*v1.z)), ((v1.x*v2.y) - (v2.x*v1.y)));
	return newVector;
	/*newVector.x =	((v2.z*v1.y) - (v1.z*v2.y));
	newVector.y =	-((v1.x*v2.z) - (v2.x*v1.z));
	newVector.z =	((v1.x*v2.y) - (v2.x*v1.y));*/
}

Vector Vector::getUnitVector(double x, double y, double z)
{
	return Vector(x / magnitude, y / magnitude, z / magnitude);
}

void Vector::printVecComponents()
{
	std::cout << "X val: " << x << std::endl;
	std::cout << "Y val: " << y << std::endl;
	std::cout << "Z val: " << z << std::endl << std::endl;
}

Vector &Vector::equals(Vector & v)
{
	this->setVector(v);
	return *this;
}

bool Vector::operator==(const Vector &v)
{
	if (x == v.x && y == v.y && z == v.z)
		return true;
	else
		return false;
}

Vector & Vector::operator=(Vector & v)
{
	return this->equals(v);
}

Vector &Vector::operator*=(Vector & v)
{
	this->x *= v.getX();
	this->y *= v.getY();
	this->z *= v.getZ();
	return *this;
}

double & Vector::operator*(Vector & v)
{
	double dotProduct = getDotProduct(*this, v);
	return dotProduct;
}

Vector & Vector::operator*=(double scalar)
{
	this->setVector(x * scalar, y * scalar, z * scalar); //distribute scalar multiple
	return *this;
}

std::string Vector::getVector()
{
	std::stringstream ss;
	ss << "<" << x << "," << y << "," << z << ">";
	return ss.str();
}

double Vector::getMagnitude(double x, double y, double z)
{
	return sqrt((x * x) + (y * y) + (z * z));
}

double Vector::getX()
{
	return x;
}

double Vector::getY()
{
	return y;
}

double Vector::getZ()
{
	return z;
}

std::ostream & operator<<(std::ostream & output, Vector & v)
{
	output << v.getVector();
	return output;
}

istream & operator>>(istream & input, Vector & v)
{
	input >> v.x;
	input >> v.y;
	input >> v.z;
	return input;
}
