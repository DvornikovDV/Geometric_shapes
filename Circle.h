//Дворников Даниил
#pragma once

#include "Shape.h"

const double pi = 3.1415926535897932;

class Circle : public Shape // Класс Circle - наследник абстрактного класса Shape
{
public:
    /// Конструктор без параметров, поле определяется единицей
    Circle() : radius(1.0) { }

    /// Коструктор с параметром r, определяющим поле radius
    Circle(double r) : radius(abs(r)) { }

    /// Геттер для поля radius
    double get_radius() const;

    /// Сеттер для поля radius
    void set_radius(double r);

    /// Вычисление площади круга с помощью поля radius и константы pi
    double get_square() const override;

    /// Вычисление длины окружности с помощью поля radius и константы pi
    double get_perimeter() const override;

private:
    double radius{};  // радиус круга
};