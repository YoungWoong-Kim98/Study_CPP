#include<iostream>
#include<string>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
};
class Circle {
public:
	void draw() {
		cout << "원 \n";
	}
};
class Rect {
public:
	void draw() {
		cout << "직사각형 \n";
	}
};
class Tria {
public:
	void draw() {
		cout << "삼각형 \n";
	}
};
int main() {
	Circle circle;
	Rect rect;
	Tria tria;
	circle.draw();
	rect.draw();
	tria.draw();

	return 0;
}