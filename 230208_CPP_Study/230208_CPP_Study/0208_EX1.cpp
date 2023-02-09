#include<iostream>
struct Rectangle {
	double width;
	double height;
};
using namespace std;
int main() {
	Rectangle r = { 0, 0 };
	cout << "가로, 세로 길이를 입력하세요. ";
	cin >> r.width >> r.height;
	cout << "넓이는 : "<< r.width * r.height << endl;
	return 0;
}