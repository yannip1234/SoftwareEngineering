#include <iostream>
using namespace std;

class Rectangle {
	public:
		int width;
		int height;

		Rectangle(){
			cout << "Default constructor" << endl;
			width = 0;
			height = 0;
		}
		
		Rectangle(int w, int h){
			if(w < 0 || h < 0){
				cout << "Error! Width and height must be positive." << endl;
				width = 0;
				height = 0;
				return;
			}

			width = w;
			height = h;
		}

		void display(){
			cout << "Width: " << width << " Height: " << height << endl;
		}
};

int main() {
	Rectangle r;
	cout << "Width: " << r.width << " Height: " << r.height << endl;
	r.width = 5;
	r.height = 3;
	
	cout << "Instantiated with width 5 and height 3" << endl;
	cout << "Width: " << r.width << " Height: " << r.height << endl;

	cout << "Calling display function in object..." << endl;
	r.display();
	
	cout << "Overloaded object... " << endl;
	Rectangle r2(6,10);
	r2.display();

	cout << "Multiple objects... calling r2" << endl;
	Rectangle r3(45,24);
	r3.display();

	cout << "Objects in dynamic memory..." << endl;
	Rectangle *r4 = new Rectangle(35,22);
	r4 -> display; //can also dereference (*r4).display();


	return 0;
}
