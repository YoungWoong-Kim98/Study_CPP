// class 클래스 (기본적으로 private)
#include<iostream>
#include<string>
using namespace std;
class Animal {
	string jong;

};
class Dog {

};
class Cat { // 기본적으로 정보은닉
	string name;
	int age;
public: 
	Cat(string name, string jong) { // 생성자
		this->name = name;
		this->jong = jong;
	}
	void mew() { // 메소드
		cout << "야옹\n";
	}
	void eat() {
		cout << "생선을 먹는다\n";
	}
	string get_name() {
		return name;
	}
	string get_jong() {
		return jong;
	}
	int get_age() {
		return age;
	}
	void set_name(string name) { // setName
		this->name = name;
	}
	void set_jong(string jong) { 
		this->name = jong;
	}
	void set_age(int age) { 
		this->age = age;
	}
};
// Cat이라는 클래스의 인스턴스 만듦
// c는 객체
int main() {
	Cat c("나비", "페르시안"); // c는 객체, 인스턴스. 이 순간에 Cat의 생성자 실행됨.
	//Cat c = Cat();
	//c.age = 5;
	c.set_age(5);
	c.set_name("치즈");
	//string name = c.name
	string name = c.get_name();
	string jong = c.get_jong();
	int age = c.get_age();
	//cout << name << " " << jong << " " << age << endl;
	cout << c.get_name() << " " << c.get_jong() << " " << c.get_age() << endl;
	c.mew();
	c.eat();
	

	return 0;
}