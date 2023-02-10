// 클래스 상속
//#include<iostream>
//#include<string>
//using namespace std;
//class Person {
//protected: // 본인 + 상속 클래스 안에서 사용가능
//	string name;
//	string gender;
//	int age = 0;
//private: // 본인 클래스 안에서 사용가능
//
//public: // 모두 사용가능
//	Person() {
//		cout << "Person 생성자 실행됨.\n";
//	}
//	Person(string name) {
//		this->name = name;
//		cout << "Person2 생성자 실행됨.\n";
//	}
//	void talk() {
//		cout << "말하기\n";
//	}
//	void eat() {
//		cout << "먹기\n";
//	}
//	void sleep() {
//		cout << "잠자기\n";
//	}
//};
//class Student : public Person {
//	string stu_id;
//public:
//	Student() : Person("aaa") {
//		cout << "Student 생성자 실행됨.\n";
//	}
//	Student(string stu_id) {
//		this->stu_id = stu_id;
//	}
//	void study() {
//		cout << "공부하기\n";
//	}
//};
//
//int main() {
//	
//	Student s;
//	// s.name = "홍길동"; // Person 내에서 protected 접근제어자로 지정.
//	// Personrhk Person을 상속 받은 Student 클래스 내에서만 접근이 가능함.
//	//s.age = 21;
//
//	return 0;
//}
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
	Person(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
	}
};

class Student : public Person { // 기본값 private
	string stu_id;
public:
	Student() : Person("aaaa") {
		name = "홍길동";
	}
	Student(string name, string stu_id) : Person(name) {
		this->stu_id = stu_id;
	}
	Student(string name) : Person("ccccc") {  }
	Student(int a) : Person("bbbb") {  }
};


int main() {
	Student s2; // 홍길동
	cout << s2.get_name();
	Student s4("성춘향"); // ccccc
	Student s3(1); // bbbb
	Student s("홍길동", "1111111"); // 홍길동

	return 0;
}