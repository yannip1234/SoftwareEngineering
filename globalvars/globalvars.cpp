#include <iostream>
using namespace std;

int num = 0;

void inc() {
	num += 1;
}

int main() {
	//Num is accessible to all functions. num = 0
	cout << num << endl;
	inc ();
	cout << num << endl; //num = 1
	return 0;
}
