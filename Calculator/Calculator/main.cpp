#include <iostream>
#include <string>
#include "Vector.h"

using std::cout; 
using std::endl;

int main()
{
	//Home 
	Vector v1(3, 2, 1);
	Vector v2(1, 1, 1);
	v2.setVector(3, 4, 1);

	cout << v1 << endl;
	cout << v2 << endl;

	cout << v1.getMagnitude() << endl;
	cout << v2.getMagnitude() << endl;

	cout << v1.getUnitVector(3, 2, 1) << endl; 

	cout << "Dot Product: " << v1 * v2 << endl;
	v2 = v1;
	cout << "Dot Product: " << v1 * v2 << endl; //overloaded * operatorr
	v1 *= v2; //Dot Product Overloaded Operator
	cout << v1 << endl; //overloaded vector stream operator
	v1 *= 4; //scalar multiplication
	cout << v1 << endl; 
	if (v1 == v2)
		cout << " True" << endl;
	else
		cout << "false" << endl;
	Vector v3(1, 2, 3);
	Vector v4(2, 4, 6);
	cout << "\n CROSS PRODUCT" << endl;
	cout << v3.getCrossProduct(v4) << endl;
	cout << v3 << endl;
	cout << v4 << endl;

	if (v3 || v4)
		cout << "true bro " << endl;
	else
		cout << "nah" << endl;
	return 0;
}