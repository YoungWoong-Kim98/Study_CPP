/* 
(1) Shape라는 클래스를 만들어주세요.이 클래스는 아래 조건을 만족해야 합니다.
조건 1. 변의 개수, 밑변의 길이를 저장하는 변수를 가지고 있어야 합니다
조건 2. 변의 개수와 밑변의 길이를 출력하는 printInfo() 함수를 가지고 있어야 합니다.
(2) Shape 클래스를 상속 받는 Rectangle, Triangle 클래스를 만들어주세요.이 클래스들은 아래 조건을 만족해야 합니다.
조건 1. Rectangle 클래스에는 세로 길이를 의미하는 변수를 가지고 있어야 합니다.
조건 2. Triangle 클래스에는 높이 길이를 의미하는 변수를 가지고 있어야 합니다.
조건 3. 두 클래스에는 각각 도형의 넓이를 구하고 출력하는 area() 함수를 가지고 있어야 합니다.
조건 4. 두 클래스 모두 생성자에서 모든 변수에 값을 대입해주세요. (변, 밑변도 대입)
(3) 메인 함수에서 Triangle과 Rectangle 클래스를 통해 각각 인스턴스를 만들고 area() 함수를 실행시키도록 만들어주세요.*/
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
		cout << "변의 개수 : " << side;
		cout << "밑변의 길이 : " << base << endl;
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
		cout << "사각형의 넓이 : " << base * vertical;
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
		cout << "삼각형의 넓이 : " << base * high / 2;
		printlnfo;
	}
};

int main() {

	
}