#include <iostream>
#include "Figure.h"
#include "Rectangle.h"


using namespace std;

int Figure::counter = 0;
int main()
{
	Rectangle r1(6, 8);
	Rectangle r2(9, 3);
	Rectangle r3(16, 9);
	cout << r1.getArea() << endl << r1.getPerimeter() << endl << Figure::giveNumberOfFigures();

}