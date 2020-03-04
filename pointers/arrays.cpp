#include <iostream>
using namespace std;

int main(){
	int myArray[10] = {1,2,3,4,5,6,7,8,9,0};

	cout << "Address of myArray: "<< myArray << endl;

	cout << "Printing *myArray: " << *myArray << " which is equivalent to myArray[0]: " << myArray[0] << endl;

	cout << "Printing *(myArray + 1): " << *(myArray + 1) << " which is equivalent to myArray[1]" << endl;

	cout << "Pringing myArray + 2: " << myArray + 2 << " which is equivalent to &myArray[2] " << &myArray[2] << endl;
	return 0;
}

