#include <iostream>
using namespace std;

int main(){
	int i = 5;
	int j = 10;
	int *p = &i; //A pointer p that contains the address of an integer i

	cout << "Value of i: " << i << endl;
	cout << "Address of i: " << &i << endl;

	cout << "Address within pointer p: " << p << endl;
	cout << "Value contained at that address: " << *p << endl;

	p++; //increases pointer by 4 bytes as int is 4 bytes
	cout << "Address in pointer p after p++: " << p << endl;
	cout << "Value in pointer after p++: " << *p << endl;

	return 0;
}
