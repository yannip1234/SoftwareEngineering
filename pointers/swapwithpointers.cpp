#include <iostream>
using namespace std;

void swap(int *num1, int *num2){
	cout << &num1 << endl;
	cout << num2 << endl;

	int *temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(){
	int x = 5;
	int y = 10;
	
	cout << "Address of x: " << &x << endl;
	cout << "Address of y: " << &y << endl;
	swap(x, y);

	cout << "Address of x after swap: " << &x << endl;
	cout << "Address of y after swap: " << &y << endl;

	cout << x << " " << y << endl;
	return 0;
}
