/* 
(1) Shape��� Ŭ������ ������ּ���.�� Ŭ������ �Ʒ� ������ �����ؾ� �մϴ�.
���� 1. ���� ����, �غ��� ���̸� �����ϴ� ������ ������ �־�� �մϴ�
���� 2. ���� ������ �غ��� ���̸� ����ϴ� printInfo() �Լ��� ������ �־�� �մϴ�.
(2) Shape Ŭ������ ��� �޴� Rectangle, Triangle Ŭ������ ������ּ���.�� Ŭ�������� �Ʒ� ������ �����ؾ� �մϴ�.
���� 1. Rectangle Ŭ�������� ���� ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
���� 2. Triangle Ŭ�������� ���� ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
���� 3. �� Ŭ�������� ���� ������ ���̸� ���ϰ� ����ϴ� area() �Լ��� ������ �־�� �մϴ�.
���� 4. �� Ŭ���� ��� �����ڿ��� ��� ������ ���� �������ּ���. (��, �غ��� ����)
(3) ���� �Լ����� Triangle�� Rectangle Ŭ������ ���� ���� �ν��Ͻ��� ����� area() �Լ��� �����Ű���� ������ּ���.*/
#include<iostream>
#include<string>
using namespace std;

class Shape {
protected:
	int side = 0;
	double base = 0;
public:
	Shape() {
	}
	void printlnfo() {
		cout << "���� ���� : " << side;
		cout << "�غ��� ���� : " << base << endl;
	}
};
class Rectangle : public Shape {
	double vertical;
public:
	Rectangle(int side, double base) {
		this->side = side = 4;
		this->base = base = 4.4;
		vertical = 4.5;
	}
	void area(double base) {
		cout << "�簢���� ���� : " << base * vertical;
		printlnfo;
	}
};
class Triangle : public Shape {
	double high;
public:
	Triangle(int side, double base) {
		this->side = side = 3;
		this->base = base = 3.3;
		high = 3.5;
	}
	void area(double base) {
		cout << "�ﰢ���� ���� : " << base * high / 2;
		printlnfo;
	}
};

int main() {

	
}