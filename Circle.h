//��������� ������
#pragma once

#include "Shape.h"

const double pi = 3.1415926535897932;

class Circle : public Shape // ����� Circle - ��������� ������������ ������ Shape
{
public:
    /// ����������� ��� ����������, ���� ������������ ��������
    Circle() : radius(1.0) { }

    /// ���������� � ���������� r, ������������ ���� radius
    Circle(double r) : radius(abs(r)) { }

    /// ������ ��� ���� radius
    double get_radius() const;

    /// ������ ��� ���� radius
    void set_radius(double r);

    /// ���������� ������� ����� � ������� ���� radius � ��������� pi
    double get_square() const override;

    /// ���������� ����� ���������� � ������� ���� radius � ��������� pi
    double get_perimeter() const override;

private:
    double radius{};  // ������ �����
};