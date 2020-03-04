#include <iostream>
#include "rect.h"

using namespace std;

int main(){
	Rectangle r(3,8);
	r.display();
	cout << r.getWidth() << endl;
	r.setHeight(256);
	r.display();
}
