#include <iostream>
using namespace std;

class Circle {
public:
	int radius, innerRadius, outerRadius;
	double getArea(), getArea2();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
double Circle::getArea2() {
	return 3.14 * (outerRadius * outerRadius - innerRadius * innerRadius);
}
int main() {
	Circle donut;
	donut.radius = 1;
	double area1 = donut.getArea();
	cout << "donut������ " << area1 << endl;
	
	Circle pizza;
	pizza.radius = 30;
	double area2 = pizza.getArea();
	cout << "pizza������ " << area2 << endl;
	
	Circle donut_two;
	donut_two.outerRadius = 3;
	donut_two.innerRadius = 1;
	double area3 = donut_two.getArea2();
	cout << "donut_two������ " << area3 << endl;

}