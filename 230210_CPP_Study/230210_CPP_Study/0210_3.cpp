// 클래스 소멸자
#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
	int age;
	string name;
	int* p = new int[3];
public:
	Person() {// 생성자
		cout << "Person 생성자 실행" << endl;
	}
	Person(string name) {// 생성자
		cout << "Person 생성자 실행2" << endl;
	}
	void test() { // 메소드
		cout << "test" << endl;
	}
	~Person() { // 소멸자
		delete[]p;
		cout << "Person 소멸자 실행" << endl;
	}
};

class Student : public Person {
public:
	Student() {// 생성자
		cout << "Student 생성자 실행" << endl;
	}
	~Student() { // 소멸자
		cout << "Student 소멸자 실행" << endl;
	}
};

int main() {

	Person p;
	//p.test();
	Student s;

	/*Person* p1 = new Person();
	delete p1;*/

	// p.~Person();

	return 0;
}