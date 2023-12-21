//Дворников Даниил

#include "Circle.h"

/// Геттер для поля radius
double Circle::get_radius() const { return radius; }

/// Сеттер для поля radius
void Circle::set_radius( double r) { radius = abs(r); }

/// Вычисление площади круга с помощью поля radius и константы pi
double Circle::get_square() const
{
	return radius * radius * pi;
}

/// Вычисление длины окружности с помощью поля radius и константы pi
double Circle::get_perimeter() const
{
    return 2 * pi * radius;
}