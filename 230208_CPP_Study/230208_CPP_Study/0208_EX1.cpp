#include<iostream>
struct Rectangle {
	double width;
	double height;
};
using namespace std;
int main() {
	Rectangle r = { 0, 0 };
	cout << "����, ���� ���̸� �Է��ϼ���. ";
	cin >> r.width >> r.height;
	cout << "���̴� : "<< r.width * r.height << endl;
	return 0;
}