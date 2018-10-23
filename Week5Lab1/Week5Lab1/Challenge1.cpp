#include <iostream>
using namespace std;
void CalculateGravity(double altitude, double& gravity);

int main() {
	double gravity{ -9.800665 };
	double* aPtr{ nullptr };
	double* bPtr{ nullptr };
	double altitude{ 0 };
	double* altPtr{ nullptr };
	// pointing to gravity
	aPtr = &gravity;
	bPtr = aPtr;	
	cout << "The value of gravity is " << gravity << endl;
	cout << "\nThe address of gravity is " << &gravity << endl;
	cout << "\nThe size of the gravity is " << sizeof(gravity) << endl;

	if (aPtr != nullptr) {
		cout << "\nThe value of aPtr is " << *aPtr << endl;
	}
	else {
		cout << "\nThe pointer aPtr is nullpointer" << endl;
	}
	cout << "\nThe address at aPtr is " << &aPtr << endl;
	cout << " \nThe size of aPtr is " << sizeof(aPtr) << endl;



	if (bPtr != nullptr) {
		cout << "\nThe value of bPtr is " << *bPtr << endl;
	}
	else {
		cout << "\nThe pointer bPtr is nullpointer" << endl;
	}
	cout << "\nThe address at bPtr is " << &bPtr << endl;
	cout << "\nThe size of bPtr is " << sizeof(bPtr) << endl;



	CalculateGravity(altitude, gravity);
	altPtr = &altitude;
	cout << "The value of gravity at " << *altPtr << "km from centre of earth is " << gravity << endl;
}

void CalculateGravity(double altitude, double& gravity) {
	cout << "\nEnter distance from centre of the earth (Altitude)" << endl;
	cin >> altitude;

	gravity = gravity * ( (6731 / (6731 + altitude) ) * (6731 / (6731 + altitude) ) );
	
}