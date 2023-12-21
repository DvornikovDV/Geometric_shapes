// Дворников Даниил

#include "gtest/gtest.h"

#include "../Shape.h"
#include "../Circle.h"
#include "../Rectangle.h"
#include "../Triangle.h"
#include "../Coordinate.h"

const double eps = 0.00001;

TEST(Triangle, Constructors_and_getters_test) { // Тест методов класса Triangle
	{
		//Arrange
		Triangle tr;

		//Assert
		ASSERT_EQ(tr.get_side_a(), 1.0);
	}
	{
		Triangle tr(1.0, 1.0, 1.0);

		ASSERT_EQ(tr.get_side_b(), 1.0);
	}
	{
		Triangle* tr = new Triangle(1.0, 1.0, 1.0);

		ASSERT_EQ(tr->get_side_c(), 1.0);

		delete tr;
	}
	{
		vector<Coordinate> a{ {2.0, 3.0} , {2.0, 3.0} , {2.0, 3.0} };
		Triangle tr(1.0, 2.0, 3.0, a);
		
		ASSERT_EQ(tr.coordinates[0].coordinate[0], 2.0);
		a.clear();
	}
	{
		vector<Coordinate> a{ {2.0, 3.0} , {2.0, 3.0} , {2.0, 3.0} };
		Triangle* tr = new Triangle(1.0, 2.0, 3.0, a);

		ASSERT_EQ(tr->coordinates[0].coordinate[0], 2.0);
		delete tr;
		a.clear();
	}
}

TEST(Triangle, Setters_test) {
	{
		//Arrange
		Triangle tr;

		//Assert
		ASSERT_THROW(tr.set_side_a(2.0), std::invalid_argument);
	}
	{
		Triangle tr;

		ASSERT_THROW(tr.set_side_a(3.0), std::invalid_argument);
	}
	{
		Triangle tr;

		ASSERT_THROW(tr.set_side_b(2.0), std::invalid_argument);
	}
	{
		Triangle tr;

		ASSERT_THROW(tr.set_side_b(3.0), std::invalid_argument);
	}
	{
		Triangle tr;

		ASSERT_THROW(tr.set_side_c(2.0), std::invalid_argument);
	}
	{
		Triangle tr;

		ASSERT_THROW(tr.set_side_c(3.0), std::invalid_argument);
	}
}

TEST(Triangle, get_perimeter_test) {
	{
		Triangle tr(1.0, 1.0, 1.0);

		ASSERT_LE(tr.get_perimeter() - 3.0, eps);
	}
	{// Полиморфизм
		Shape* tr = new Triangle(3.3, 4.99, 5.1);

		ASSERT_LE(tr->get_perimeter() - 13.390, eps);
		delete tr;
	}
}

TEST(Triangle, get_square_test) {
	{
		Triangle tr(1.0, 1.0, 1.0);

		ASSERT_LE(tr.get_square() - 0.4330127, eps);
	}
	{// Полиморфизм
		Shape* tr = new Triangle(3.3, 4.99, 5.1);

		ASSERT_LE(tr->get_square()- 7.8620846, eps);
		delete tr;
	}
}

TEST(Triangle, similarity_test) {
	{
		Triangle tr(1.0, 1.0, 1.0);
		Triangle tr_1(2.0, 2.0, 2.0);

		ASSERT_LE(tr.similarity(tr_1) - 2.0, eps);
	}
	{
		Triangle* tr = new Triangle(3.3, 4.99, 5.1);
		Triangle* tr_1 = new Triangle(3.3, 7, 5.1);

		ASSERT_LE(tr->similarity(*tr_1) - 0, eps);

		delete tr, tr_1;
	}
}

TEST(Circle, Constructors_and_getters_test) { // Тест методов класса Circle
	{
		//Arrange
		Circle cr;

		//Assert
		ASSERT_EQ(cr.get_radius(), 1.0);
	}
	{
		Circle cr(4.0);

		ASSERT_EQ(cr.get_radius(), 4.0);
	}
	{
		Circle* cr = new Circle(4.0);

		ASSERT_EQ(cr->get_radius(), 4.0);

		delete cr;
	}
}

TEST(Circle, Setter_test) {
	{
		//Arrange
		Circle cr;

		//Act
		cr.set_radius(2.0);

		//Assert
		ASSERT_EQ(cr.get_radius(), 2.0);
	}
}

TEST(Circle, get_perimeter_test) {
	{
		Circle cr(3.0);

		ASSERT_LE(cr.get_perimeter() - 18.849552, eps);
	}
	{
		Shape* cr = new Circle(4.99);

		ASSERT_LE(cr->get_perimeter() - 31.35308816, eps);
		delete cr;
	}
}

TEST(Circle, get_square_test) {
	{
		Circle cr(3.0);

		ASSERT_LE(cr.get_square() - 28.274333, eps);
	}
	{
		Shape* cr = new Circle(4.99);

		ASSERT_LE(cr->get_square() - 78.22597123, eps);
		delete cr;
	}
}

TEST(Rectangle, Constructors_and_getters_test) { // Тест методов класса Rectangle
	{
		//Arrange
		Rectangle rc;

		//Assert
		ASSERT_EQ(rc.get_width(), 1.0);
	}
	{
		Rectangle rc(1.0, 4.0);

		ASSERT_EQ(rc.get_height(), 4.0);
	}
	{
		Rectangle* rc = new Rectangle(1.0, 4.0);

		ASSERT_EQ(rc->get_width(), 1.0);

		delete rc;
	}
}

TEST(Rectangle, Setter_test) {
	{
		//Arrange
		Rectangle rc;

		//Act
		rc.set_width(2.0);

		//Assert
		ASSERT_EQ(rc.get_width(), 2.0);
	}
	{
		//Arrange
		Rectangle rc;

		//Act
		rc.set_height(2.0);

		//Assert
		ASSERT_EQ(rc.get_height(), 2.0);
	}
}

TEST(Rectangle, get_perimeter_test) {
	{
		Rectangle rc(1.0, 3.0);

		ASSERT_LE(rc.get_perimeter() - 8.0, eps);
	}
	{
		Shape* rc = new Rectangle(1.01, 4.99);

		ASSERT_LE(rc->get_perimeter() - 12.0, eps);
		delete rc;
	}
}

TEST(Rectangle, get_square_test) {
	{
		Rectangle rc(1.0, 3.0);

		ASSERT_LE(rc.get_square() - 3.0, eps);
	}
	{
		Shape* rc = new Rectangle(2.33, 4.99);

		ASSERT_LE(rc->get_square() - 11.6267, eps);
		delete rc;
	}
}