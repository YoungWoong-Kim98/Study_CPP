#include<iostream>
#include<string>
using namespace std;
class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle(double width, double height) {
		this->width = width;
		this->height = height;
	}
	void area() {
		cout << width * height << endl;
	}
};
int main() {
	double w = 0, h = 0;
	cout << "가로, 세로 길이를 입력하세요. ";
	cin >> w >> h;
	Rectangle r(w, h);
	cout << "넓이는 : ";
	r.area();
	return 0;
}