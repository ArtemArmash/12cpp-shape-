#include <iostream>
using namespace std;

class Shape {
public:
	virtual float S() = 0;
};

class Triangle : public Shape {
private:
	int a;
	int h;
public:
	Triangle(int a, int h) : a{a},h{h}{}
	float S() override {
		return (a * h) / 2;
	}
};
class Circle : public Shape {
private:
	int r;
public:
	Circle(int r) : r{ r } {}
	float S() override {
		return 3.14 * (r * r);
	}
};
class Rectangle : public Shape {
private:
	int a;
	int b;
public:
	Rectangle(int a, int b) : a{ a }, b{ b } {}
	float S() override {
		return a * b;
	}
};



int main() {
	Circle c(5);
	Triangle tr(2, 5);
	Rectangle re(3, 3);
	cout << "S of Circle = " << c.S() << endl;
	cout << "S of Rectangle = " << re.S() << endl;
	cout << "S of Triangle = " << tr.S() << endl;
}
