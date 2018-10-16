#include <iostream>;
#include <array>;
#include <cassert>;
using namespace std;

int main() {

	int a1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int a2[5];
	int i;


#ifndef NDEBUG
	assert(sizeof(a1) != sizeof(a2) && "Arrays are not of equal length"); // checks if length of arrays are equal
#endif // !NDEBUG
	
	for (i = 0; i < 8; i++) {
		a2[i] = a1[i];			// sets array elements equal
	}

	cout << "Elements of a2 are:" << endl;
	for (int i = 0; i < 8; i++) {
		cout << a2[i] << " "; // prints elements in a2
	}
	
	
	
}