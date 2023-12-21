//��������� ������

#include "Circle.h"

/// ������ ��� ���� radius
double Circle::get_radius() const { return radius; }

/// ������ ��� ���� radius
void Circle::set_radius( double r) { radius = abs(r); }

/// ���������� ������� ����� � ������� ���� radius � ��������� pi
double Circle::get_square() const
{
	return radius * radius * pi;
}

/// ���������� ����� ���������� � ������� ���� radius � ��������� pi
double Circle::get_perimeter() const
{
    return 2 * pi * radius;
}