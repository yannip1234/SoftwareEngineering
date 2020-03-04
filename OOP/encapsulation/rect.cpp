#include <iostream>
#include "rect.h"
using namespace std;

Rectangle::Rectangle(){
			cout << "Default constructor" << endl;
			width = 0;
			height = 0;
			color = "red"
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
			color = "blue";
		}

void Rectangle::display(){
			cout << "Width: " << width << " Height: " << height << " Area: " << getArea() << " Color: " << color << endl;
}

int Rectangle::getArea(){
	return width * height;
}

int Rectangle::getWidth(){
	return width;
}

int Rectangle::getHeight(){
	return height;
}

void Rectangle::setWidth(int w){
	if(w < 0){
		cout << "Error!" << endl;
	}
	width = w;
}
void Rectangle::setHeight(int h){
	if(h < 0){
		cout << "Error!" << endl;
	}
	height = h;
}
