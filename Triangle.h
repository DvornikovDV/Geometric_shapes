//Дворников Даниил
#pragma once

#include "Coordinate.h"
#include "Shape.h"

//using std::string;

class Triangle : public Shape // Класс Circle - наследник абстрактного класса Shape
{
public:
	vector<Coordinate> coordinates;

	/// Конструктор без параметров, поля определяются единицами
	Triangle() : side_a(1.0), side_b(1.0), side_c(1.0) { }

	/// Конструктор с параметрами a, b, c, определяющими стороны треугольника
	Triangle(double a, double b, double c){
		if (a + b > c && a + c > b && b + c > a) {
			side_a = a;
			side_b = b;
			side_c = c;
		}
	}

	/// Конструктор с параметрами a, b, c, coord, определяющими стороны треугольника и вектор координат его вершин
	Triangle(double a, double b, double c, const vector<Coordinate>& coord) {
		if (a + b > c && a + c > b && b + c > a) {
			side_a = a;
			side_b = b;
			side_c = c;
		}

		if (coord.size() == 3) coordinates = coord;
	}

	/// Деструктор для объектов класса Triangle, очищает вектор coordinates
	//~Triangle() {
	//	coordinates.clear();
	//}

	/// Геттер для поля side_a
	float get_side_a() const;

	/// Геттер для поля side_b
	float get_side_b() const;

	/// Геттер для поля side_c
	float get_side_c() const;

	/// Сеттер для поля side_a, принимает параметр a
	void set_side_a(double a);

	/// Сеттер для поля side_b, принимает параметр b
	void set_side_b(double b);

	/// Сеттер для поля side_c, принимает параметр c
	void set_side_c(double c);

	/// Вычисление площади треугольника с помощью полей side_a, side_b, side_c и метода get_perimeter
	double get_square() const override;

	/// Вычисление периметра треугольника с помощью полей side_a, side_b, side_c
	double get_perimeter() const override;

	/// Вычисление коэффициента подобия
	double similarity(const Triangle& t_1) const;

private: // Стороны треугольника
	double side_a{};
	double side_b{};
	double side_c{};
};

