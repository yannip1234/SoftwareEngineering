#include <iostream>
#include "swap.h"
using namespace std;

int main(){
	int a =3;
	int b =5;

	swap(a,b);

	cout << a << " " << b << endl;
	cout << "Success" << endl;
	return 0;
}
