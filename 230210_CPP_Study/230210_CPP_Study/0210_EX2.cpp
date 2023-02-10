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
		cout << "�� \n";
	}
};
class Rect {
public:
	void draw() {
		cout << "���簢�� \n";
	}
};
class Tria {
public:
	void draw() {
		cout << "�ﰢ�� \n";
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