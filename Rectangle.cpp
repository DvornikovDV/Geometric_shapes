//Дворников Даниил

#include "Rectangle.h"

/// Геттер для поля width
double Rectangle::get_width() const { return width; }

/// Геттер для поля height
double Rectangle::get_height() const { return height; }

/// Сеттер для поля width, принимает параметр w
void Rectangle::set_width(double w) { width = abs(w); }

/// Сеттер для поля height, принимает параметр h
void Rectangle::set_height(double h) { height = abs(h); }

/// Вычисление площади прямоугольника с помощью полей width и height
double Rectangle::get_square() const
{
    return width * height;
}

/// Вычисление периметра прямоугольника с помощью полей width и height
double Rectangle::get_perimeter() const
{
    return width * 2 + height * 2;
}