#include<iostream>
#include<string>
using namespace std;
class Student {
protected:
	string name, sch;
	int age, snum;
public:
	Student(string name, string sch, int age, int snum) {
		this->name = name;
		this->sch = sch;
		this->age = age;
		this->snum = snum;
	}

	void lunch() {
		cout << "점심은 학식\n";
	}
};
class Kim : public Student {
	string kimbab;
public:
	Kim(string name, string sch, int age, int snum) : Student(name,sch,age,snum) {}
	void lunch() {
		cout << "점심은 김가네 김밥\n";
		cout << "이름 : " << name << endl;
		cout << "학교 : " << sch << endl;
		cout << "나이 : " << age << endl;
		cout << "학번 : " << snum << endl;
	}
};
class Baek : public Student {
	string pizza;
public:
	Baek(string name, string sch, int age, int snum) : Student(name, sch, age, snum) {}
	void lunch() {
		cout << "점심은 백종원 피자\n";
		cout << "이름 : " << name << endl;
		cout << "학교 : " << sch << endl;
		cout << "나이 : " << age << endl;
		cout << "학번 : " << snum << endl;
	}
};
int main() {
	Student s("","",0,0);
	s.lunch();
	Kim k("김영웅","대학교",26,11111111);
	k.lunch();
	Baek b("김이박", "대학교", 22, 12123434);
	b.lunch();
	return 0;
}