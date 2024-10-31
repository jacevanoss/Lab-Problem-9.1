/* Date: 10/31/2024
* Name: Jace Van Oss
* File: Laboratory_9_P9-1.cpp
* 
* Description: program that initializes an array with ten 4 digit random integers and then
* prints out every number, even index, every even number, in reverse order, and only first and last
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void printarray(int array[], int size);


int main() {
	srand(time(0));
	const int arraySize = 10;
	int randomIntegers[arraySize];

	for (int i = 0; i < arraySize; i++) {
		randomIntegers[i] = rand() % 9000 + 1000;
	}
	printarray(randomIntegers, arraySize);
	
	

	return 0;
}

void printarray(int array[], int size) {
	cout << "The random integers: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}