#include <string>
using namespace std;

class Rectangle {
	private:
		int width;
		int height;
	public:

		Rectangle();

		Rectangle(int w, int h);

		void display();
		
		int getArea();
		
		int getWidth(); //getters
		int getHeight();

		void setWidth(int w); //setters
		void setHeight(int h);
};
