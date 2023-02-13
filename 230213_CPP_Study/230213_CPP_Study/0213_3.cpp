// static(����) ���
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Person {
protected:
	string name;
	static int count; // ��ü ���� ������ ���� �Ҵ���� �ʰ�, ��� ��ü�� ���� ������ ����.
public:
	static void static_method() {
		// name = 
		// name = "�ƹ���";
		// set_name("�ƹ���"); // static �޼ҵ� �ȿ����� �Ϲ� ����� ���� �� �� ����.
		cout << "����ƽ �޼ҵ� �׽�Ʈ" << endl;
	}
	static int get_count() {
		return count;
	}
	Person() {
		this->name = "�ƹ���";
		count++;
	}
	virtual ~Person() {
		cout << "����� �Ҹ����Դϴ�." << endl;
		count--;
	}
	virtual void info() {
		cout << "����Դϴ�." << endl;
	}
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
	}
};

int Person::count = 0;

class Student : public Person {
	string stu_id;
public:
	~Student() {
		cout << "�л��� �Ҹ����Դϴ�." << endl;
	}
	void info() {
		cout << "�л��Դϴ�." << endl;
	}
	void test() {
		cout << "�л��� test �Լ�" << endl;
	}
};

class Instructor : public Person {
public:
	~Instructor() {
		cout << "������ �Ҹ����Դϴ�." << endl;
	}
	void info() {
		cout << "�����Դϴ�." << endl;
	}
};

int main() {
	// Person::info();
	// static ����� ��� ��ü�� �ϳ��� ������ �����մϴ�.
	// name static ��� X => ��ü ���� ������ ���� �Ҵ��.
	// static_var static ��� O => ��ü ���� ������ ���� �Ҵ���� �ʰ�, ��� ��ü�� ���� ������ ����.
	Person::static_method();
	cout << Person::get_count() << endl;
	// int i = 0;

	Person p;
	p.info();
	p.static_method();

	Person p1;
	p1.set_name("ȫ�浿");

	Person p2;

	cout << Person::get_count() << "��" << endl;

	Person* p3[5];
	for (int i = 0; i < 5; i++) {
		p3[i] = new Person();
	}

	cout << Person::get_count() << "��" << endl;

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}

	cout << Person::get_count() << "��" << endl;

	vector<Person*> persons = { new Person(), new Person() };

	cout << Person::get_count() << "��" << endl;

	persons.push_back(new Person());

	cout << Person::get_count() << "��" << endl;

	cout << persons.size() << "������" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++) {
		delete persons.at(i);
		// delete persons[i];
	}

	for (int i = 0; i < size; i++) {
		persons.pop_back();
	}

	cout << Person::get_count() << "��" << endl;

	return 0;
}