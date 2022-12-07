#pragma once
class Figure
{
private:
	static int counter;


public:
	Figure() { counter++; }
	virtual ~Figure() { counter--; }
	
	static int giveNumberOfFigures() { return counter; }
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;

};

