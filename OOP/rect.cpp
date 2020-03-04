#include <iostream>
#include "rect.h"
using namespace std;

Rectangle::Rectangle(){
			cout << "Default constructor" << endl;
			width = 0;
			height = 0;
		}
		
Rectangle::Rectangle(int w, int h){
			if(w < 0 || h < 0){
				cout << "Error! Width and height must be positive." << endl;
				width = 0;
				height = 0;
				return;
			}

			width = w;
			height = h;
		}

void Rectangle::display(){
			cout << "Width: " << width << " Height: " << height << " Area: " << getArea() << endl;
}

int Rectangle::getArea(){
	return width * height;
}
