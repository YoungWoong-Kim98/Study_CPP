// Ŭ���� �Ҹ���
#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
	int age;
	string name;
	int* p = new int[3];
public:
	Person() {// ������
		cout << "Person ������ ����" << endl;
	}
	Person(string name) {// ������
		cout << "Person ������ ����2" << endl;
	}
	void test() { // �޼ҵ�
		cout << "test" << endl;
	}
	~Person() { // �Ҹ���
		delete[]p;
		cout << "Person �Ҹ��� ����" << endl;
	}
};

class Student : public Person {
public:
	Student() {// ������
		cout << "Student ������ ����" << endl;
	}
	~Student() { // �Ҹ���
		cout << "Student �Ҹ��� ����" << endl;
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