// ��������� ������

#include "Triangle.h"

/// ������ ��� ���� side_a
float Triangle::get_side_a() const { return side_a; }

/// ������ ��� ���� side_b
float Triangle::get_side_b() const { return side_b; }

/// ������ ��� ���� side_c
float Triangle::get_side_c() const { return side_c; }

/// ������ ��� ���� side_a, ��������� �������� a
void Triangle::set_side_a(double a) { if (side_b + side_c <= abs(a)) throw std::invalid_argument("����� 2 ������ ������ ������� �������."); side_a = abs(a); }

/// ������ ��� ���� side_b, ��������� �������� b
void Triangle::set_side_b(double b) { if (side_a + side_c <= abs(b)) throw std::invalid_argument("����� 2 ������ ������ ������� �������."); side_b = abs(b); }

/// ������ ��� ���� side_c, ��������� �������� c
void Triangle::set_side_c(double c) { if (side_b + side_a <= abs(c)) throw std::invalid_argument("����� 2 ������ ������ ������� �������."); side_c = abs(c); }

/// ���������� ������� ������������ � ������� ����� side_a, side_b, side_c � ������ get_perimeter
double Triangle::get_square() const {
	double p = get_perimeter() / 2.0;
	return sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));
}

/// ���������� ��������� ������������ � ������� ����� side_a, side_b, side_c
double Triangle::get_perimeter() const {
	return side_a + side_b + side_c;
}

/// ���������� ������������ �������
double Triangle::similarity(const Triangle& t_1) const {
	double k{};///eps
	if (side_a / t_1.side_a == side_b / t_1.side_b == side_c / t_1.side_c) {
		k = side_a / t_1.side_a;
	}
	return k; // ���� ����������� ������� ����� 0, �� ������������ �� �������
}