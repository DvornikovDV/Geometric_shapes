//Дворников Даниил
#pragma once

#include <iostream>

class Shape
{
public:
    
    virtual double get_square() const = 0;     // площадь фигуры
    virtual double get_perimeter() const = 0;  // периметр фигуры
};