//��������� ������
#pragma once

#include <iostream>

class Shape
{
public:
    
    virtual double get_square() const = 0;     // ������� ������
    virtual double get_perimeter() const = 0;  // �������� ������
};