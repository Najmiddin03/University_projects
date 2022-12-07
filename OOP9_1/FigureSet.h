#pragma once
#include "Figure.h"
#include "Rectangle.h"
class FigureSet
{
private:
	Figure* listOfFigs;
	int listLength;
public:
	FigureSet() {
		listOfFigs = nullptr;
		listLength = 0;
	}
	~FigureSet() {
		delete[]listOfFigs;
	}

	void addFigure(Figure* f) {

	}

	double totalArea() {
		double sum = 0;
		for (int i = 0; i < listLength; i++) {
			sum += listOfFigs[i].getArea();
		}
	}
};

