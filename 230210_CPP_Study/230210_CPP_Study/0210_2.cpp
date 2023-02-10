// 추상 클래스 : 추상 메소드를 한 개 이상 가지고 있는 클래스
#include<iostream>
#include<string>
using namespace std;

class Elec { // 추상 클래스
protected:

public:
	virtual void on() = 0; // 추상 메소드 (순수 가상 함수)
	// void off() { // 가상 함수
	virtual void off() = 0;
	void test() {
		cout << "test \n";
	}
};
class TV : public Elec { 
// 부모에서 상속 받은 순수 가상 함수를 구현하지 않을 경우, 자식 클래스 또한 추상 클래스가 됨
public:
	void on() {
		cout << "TV 켜기"<<endl;
	}
	void off() {
		cout << "TV 끄기" << endl;
	}
};
class Raidio : public Elec {
public:
	void on() {
		cout << "Raidio 켜기" << endl;
	}
	void off() {
		cout << "Raidio 끄기" << endl;
	}
};

int main() {
	//Elec elec; // 추상 클래스로는 객체를 생성할 수 없음.
	/*TV tv();
	cout << tv.a;*/
	TV tv;
	Raidio raidio;
	tv.test();
	tv.on();
	tv.off();
	raidio.test();
	raidio.on();
	raidio.off();

	return 0;
}