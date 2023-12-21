//��������� ������
#pragma once
#include "Shape.h"

class Rectangle : public Shape // ����� Rectangle - ��������� ������������ ������ Shape
{
public:
    /// ����������� ��� ����������, ���� ������������ ���������
    Rectangle() : width(1.0), height(1.0) { }

    /// ����������� � ����������� w � h, ������������� ���� width � height
    Rectangle(double w, double h) : width(abs(w)), height(abs(h)) { }

    /// ������ ��� ���� width
    double get_width() const;

    /// ������ ��� ���� height
    double get_height() const;

    /// ������ ��� ���� width
    void set_width(double w);

    /// ������ ��� ���� height
    void set_height(double h);

    /// ���������� ������� �������������� � ������� ����� width � height
    double get_square() const override;

    /// ���������� ��������� �������������� � ������� ����� width � height
    double get_perimeter() const override;

private:
    double width = 0;   // ������
    double height{};  // ������
};