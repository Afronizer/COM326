#include <iostream>
#include <array>

using namespace std;
void printArray(float arr[]);
void printArrayBackwards(float arr[]);

int main() {

	float arr[5] ={ 2.1f, 3.1f, 4.1f, 5.1f, 6.1f };
	printArrayBackwards(arr);
	printArray(arr);
	

	
}

void printArray(float arr[]) {
	float *p;
	int counter = 1;

	for (p = &arr[0]; p < &arr[5]; p++){
		cout << "\nValue " << counter << " is " << *p << endl;
		counter++;
	}
}

void printArrayBackwards(float arr[]) {
	float *p1;
	int counter = 5;

	for (p1 = &arr[4]; p1 >= &arr[0]; p1--) {

		cout << "\nValue " << counter << " is " << *p1 << endl;
		counter--;
	}
}
	
