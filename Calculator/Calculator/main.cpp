#include <iostream>
#include <string>
#include "Vector.h"

using std::cout; 
using std::endl;

int main()
{
	//Home
	Vector v1(3, 2, 1);
	Vector v2(1, 2, 3);
	v2.setVector(3, 4, 7);

	cout << v1.getVector() << endl;
	cout << v2.getVector() << endl;
	cout << v1.getMagnitude() << endl;
	cout << v2.getMagnitude() << endl;
	cout << v1.getUnitVector(3, 2, 1) << endl;
	cout << "Dot Product: " << v1 * v2 << endl;
	v2 = v1;
	cout << "Dot Product: " << v1 * v2 << endl;
	v1 *= v2;
	cout << v1 << endl;
	v1 *= 4; //scalar multiplication
	cout << v1 << endl;

	return 0;
}