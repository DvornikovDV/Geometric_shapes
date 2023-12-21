//Дворников Даниил

#include "Triangle.h"

int main()
{
    /// Пример полиморфизма
	Shape* tr_1 = new Triangle(3.3, 4.99, 5.1);

	std::cout << tr_1->get_perimeter();

	//std::cout << tr_1->get_side_a() << "\n";

	Triangle* tr{ dynamic_cast<Triangle*>(tr_1) };

	std::cout << tr->get_side_a() << "\n";
}