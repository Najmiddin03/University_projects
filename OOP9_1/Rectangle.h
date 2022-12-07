#include <iostream>

#pragma once
#include "Figure.h"

using namespace std;
class Rectangle :
    public Figure
{
protected:
    double side1, side2;
public:
    Rectangle(double s1, double s2) {
        if (s1 < 0 || s2 < 0) {
            throw runtime_error("Negative value");
        }
        side1 = s1;
        side2 = s2;
    }

    ~Rectangle() {}

    double getArea() { return side1 * side2; }
    double getPerimeter() { return 2 * (side1 + side2); }

};

