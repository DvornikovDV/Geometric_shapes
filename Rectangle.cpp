//��������� ������

#include "Rectangle.h"

/// ������ ��� ���� width
double Rectangle::get_width() const { return width; }

/// ������ ��� ���� height
double Rectangle::get_height() const { return height; }

/// ������ ��� ���� width, ��������� �������� w
void Rectangle::set_width(double w) { width = abs(w); }

/// ������ ��� ���� height, ��������� �������� h
void Rectangle::set_height(double h) { height = abs(h); }

/// ���������� ������� �������������� � ������� ����� width � height
double Rectangle::get_square() const
{
    return width * height;
}

/// ���������� ��������� �������������� � ������� ����� width � height
double Rectangle::get_perimeter() const
{
    return width * 2 + height * 2;
}