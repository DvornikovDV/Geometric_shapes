//Дворников Даниил
#pragma once
#include "Shape.h"

class Rectangle : public Shape // Класс Rectangle - наследник абстрактного класса Shape
{
public:
    /// Конструктор без параметров, поля определяются единицами
    Rectangle() : width(1.0), height(1.0) { }

    /// Конструктор с параметрами w и h, определяющими поля width и height
    Rectangle(double w, double h) : width(abs(w)), height(abs(h)) { }

    /// Геттер для поля width
    double get_width() const;

    /// Геттер для поля height
    double get_height() const;

    /// Сеттер для поля width
    void set_width(double w);

    /// Сеттер для поля height
    void set_height(double h);

    /// Вычисление площади прямоугольника с помощью полей width и height
    double get_square() const override;

    /// Вычисление периметра прямоугольника с помощью полей width и height
    double get_perimeter() const override;

private:
    double width = 0;   // ширина
    double height{};  // высота
};