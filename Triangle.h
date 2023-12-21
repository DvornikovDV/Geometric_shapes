//��������� ������
#pragma once

#include "Coordinate.h"
#include "Shape.h"

//using std::string;

class Triangle : public Shape // ����� Circle - ��������� ������������ ������ Shape
{
public:
	vector<Coordinate> coordinates;

	/// ����������� ��� ����������, ���� ������������ ���������
	Triangle() : side_a(1.0), side_b(1.0), side_c(1.0) { }

	/// ����������� � ����������� a, b, c, ������������� ������� ������������
	Triangle(double a, double b, double c){
		if (a + b > c && a + c > b && b + c > a) {
			side_a = a;
			side_b = b;
			side_c = c;
		}
	}

	/// ����������� � ����������� a, b, c, coord, ������������� ������� ������������ � ������ ��������� ��� ������
	Triangle(double a, double b, double c, const vector<Coordinate>& coord) {
		if (a + b > c && a + c > b && b + c > a) {
			side_a = a;
			side_b = b;
			side_c = c;
		}

		if (coord.size() == 3) coordinates = coord;
	}

	/// ���������� ��� �������� ������ Triangle, ������� ������ coordinates
	//~Triangle() {
	//	coordinates.clear();
	//}

	/// ������ ��� ���� side_a
	float get_side_a() const;

	/// ������ ��� ���� side_b
	float get_side_b() const;

	/// ������ ��� ���� side_c
	float get_side_c() const;

	/// ������ ��� ���� side_a, ��������� �������� a
	void set_side_a(double a);

	/// ������ ��� ���� side_b, ��������� �������� b
	void set_side_b(double b);

	/// ������ ��� ���� side_c, ��������� �������� c
	void set_side_c(double c);

	/// ���������� ������� ������������ � ������� ����� side_a, side_b, side_c � ������ get_perimeter
	double get_square() const override;

	/// ���������� ��������� ������������ � ������� ����� side_a, side_b, side_c
	double get_perimeter() const override;

	/// ���������� ������������ �������
	double similarity(const Triangle& t_1) const;

private: // ������� ������������
	double side_a{};
	double side_b{};
	double side_c{};
};

