// Дворников Даниил

#include "Triangle.h"

/// Геттер для поля side_a
float Triangle::get_side_a() const { return side_a; }

/// Геттер для поля side_b
float Triangle::get_side_b() const { return side_b; }

/// Геттер для поля side_c
float Triangle::get_side_c() const { return side_c; }

/// Сеттер для поля side_a, принимает параметр a
void Triangle::set_side_a(double a) { if (side_b + side_c <= abs(a)) throw std::invalid_argument("Сумма 2 сторон меньше третьей стороны."); side_a = abs(a); }

/// Сеттер для поля side_b, принимает параметр b
void Triangle::set_side_b(double b) { if (side_a + side_c <= abs(b)) throw std::invalid_argument("Сумма 2 сторон меньше третьей стороны."); side_b = abs(b); }

/// Сеттер для поля side_c, принимает параметр c
void Triangle::set_side_c(double c) { if (side_b + side_a <= abs(c)) throw std::invalid_argument("Сумма 2 сторон меньше третьей стороны."); side_c = abs(c); }

/// Вычисление площади треугольника с помощью полей side_a, side_b, side_c и метода get_perimeter
double Triangle::get_square() const {
	double p = get_perimeter() / 2.0;
	return sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));
}

/// Вычисление периметра треугольника с помощью полей side_a, side_b, side_c
double Triangle::get_perimeter() const {
	return side_a + side_b + side_c;
}

/// Вычисление коэффициента подобия
double Triangle::similarity(const Triangle& t_1) const {
	double k{};///eps
	if (side_a / t_1.side_a == side_b / t_1.side_b == side_c / t_1.side_c) {
		k = side_a / t_1.side_a;
	}
	return k; // Если коэффициент подобия равен 0, то треугольники не подобны
}