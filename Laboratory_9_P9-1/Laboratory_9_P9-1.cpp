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
void evenIndex(int array[], int size); 
void evenValues(int array[], int size);
void reversedOrder(int array[], int size);
void firstAndLast(int array[], int size);

int main() {
	srand(time(0));
	const int arraySize = 10;
	int randomIntegers[arraySize];

	for (int i = 0; i < arraySize; i++) {
		randomIntegers[i] = rand() % 9000 + 1000;
	}
	printarray(randomIntegers, arraySize);
	evenIndex(randomIntegers, arraySize);
	evenValues(randomIntegers, arraySize);
	reversedOrder(randomIntegers, arraySize);
	firstAndLast(randomIntegers, arraySize);
	
	return 0;
}

void printarray(int array[], int size) {
	cout << "The random integers: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " "; // prints each element
	}
	cout << endl;
}
void evenIndex(int array[], int size) {
	cout << "Even indices:        ";
	for (int i = 0; i < size; i+=2) { // prints even indicies
		cout << array[i] << " ";
	}
	cout << endl;
}
void evenValues(int array[], int size) {
	cout << "Evan values:         ";
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 == 0) {
			cout << array[i] << " ";
		}
	}
	cout << endl;
}
void reversedOrder(int array[], int size) {
	cout << "Reversed order:      ";
	for (int i = size - 1; i >= 0; i--) { // starts from last index
		cout << array[i] << " "; 
	}
	cout << endl;
}
void firstAndLast(int array[], int size) {
	cout << "First and last:      " << array[0] << " " << array[size - 1] << endl;
}