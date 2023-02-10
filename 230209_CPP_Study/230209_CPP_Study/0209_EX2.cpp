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
		cout << "������ �н�\n";
	}
};
class Kim : public Student {
	string kimbab;
public:
	Kim(string name, string sch, int age, int snum) : Student(name,sch,age,snum) {}
	void lunch() {
		cout << "������ �谡�� ���\n";
		cout << "�̸� : " << name << endl;
		cout << "�б� : " << sch << endl;
		cout << "���� : " << age << endl;
		cout << "�й� : " << snum << endl;
	}
};
class Baek : public Student {
	string pizza;
public:
	Baek(string name, string sch, int age, int snum) : Student(name, sch, age, snum) {}
	void lunch() {
		cout << "������ ������ ����\n";
		cout << "�̸� : " << name << endl;
		cout << "�б� : " << sch << endl;
		cout << "���� : " << age << endl;
		cout << "�й� : " << snum << endl;
	}
};
int main() {
	Student s("","",0,0);
	s.lunch();
	Kim k("�迵��","���б�",26,11111111);
	k.lunch();
	Baek b("���̹�", "���б�", 22, 12123434);
	b.lunch();
	return 0;
}