#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person() {}
	string get_name() {
		return name;
	}
	void show() {
		cout << "나는 사람이야 \n";
	}
};

class Student : public Person { // 기본값 private
	string stu_id;
public:
	Student() : Person() {}
	void show() {
		cout << "나는 학생이야 \n";
	}
};

class Professor : public Person { // 기본값 private
	string stu_id;
public:
	Professor() : Person() {}

};


int main() {
	Person p;
	p.show();
	Student s2;
	s2.show();
	Professor pro;
	pro.show();
	// 오류가 난다
	// 둘 중에 하나가 실행될 것 같다.

	return 0;
}