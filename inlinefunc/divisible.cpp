#include <iostream>
using namespace std;

void isDivisible(int x, int y){
	if((x%y)==0){
		cout << x << " is divisible by " << y << endl;
	}
	else {
		cout << x << " is not divisible by " << y << endl;
	}
}

int main(){
	int x = 20;
	int y = 5;
	isDivisible(20,5);
	return 0;
}
