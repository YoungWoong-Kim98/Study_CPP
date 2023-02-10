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
		cout << "���� ����̾� \n";
	}
};

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person() {}
	void show() {
		cout << "���� �л��̾� \n";
	}
};

class Professor : public Person { // �⺻�� private
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
	// ������ ����
	// �� �߿� �ϳ��� ����� �� ����.

	return 0;
}