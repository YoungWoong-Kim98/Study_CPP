// Ŭ���� ���
//#include<iostream>
//#include<string>
//using namespace std;
//class Person {
//protected: // ���� + ��� Ŭ���� �ȿ��� ��밡��
//	string name;
//	string gender;
//	int age = 0;
//private: // ���� Ŭ���� �ȿ��� ��밡��
//
//public: // ��� ��밡��
//	Person() {
//		cout << "Person ������ �����.\n";
//	}
//	Person(string name) {
//		this->name = name;
//		cout << "Person2 ������ �����.\n";
//	}
//	void talk() {
//		cout << "���ϱ�\n";
//	}
//	void eat() {
//		cout << "�Ա�\n";
//	}
//	void sleep() {
//		cout << "���ڱ�\n";
//	}
//};
//class Student : public Person {
//	string stu_id;
//public:
//	Student() : Person("aaa") {
//		cout << "Student ������ �����.\n";
//	}
//	Student(string stu_id) {
//		this->stu_id = stu_id;
//	}
//	void study() {
//		cout << "�����ϱ�\n";
//	}
//};
//
//int main() {
//	
//	Student s;
//	// s.name = "ȫ�浿"; // Person ������ protected ���������ڷ� ����.
//	// Personrhk Person�� ��� ���� Student Ŭ���� �������� ������ ������.
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

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person("aaaa") {
		name = "ȫ�浿";
	}
	Student(string name, string stu_id) : Person(name) {
		this->stu_id = stu_id;
	}
	Student(string name) : Person("ccccc") {  }
	Student(int a) : Person("bbbb") {  }
};


int main() {
	Student s2; // ȫ�浿
	cout << s2.get_name();
	Student s4("������"); // ccccc
	Student s3(1); // bbbb
	Student s("ȫ�浿", "1111111"); // ȫ�浿

	return 0;
}