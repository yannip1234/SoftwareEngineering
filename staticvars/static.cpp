#include <iostream>
using namespace std;

void count(){
	static int c = 1;
	cout << "Execution number" << c++ << endl;
}

int main(){
	for(int i =0; i < 10; i++){
		count();
	}
	return 0;
}
