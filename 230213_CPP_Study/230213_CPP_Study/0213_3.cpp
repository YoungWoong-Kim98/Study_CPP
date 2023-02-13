// static(정적) 멤버
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Person {
protected:
	string name;
	static int count; // 객체 별로 공간이 따로 할당되지 않고, 모든 객체가 같은 공간을 공유.
public:
	static void static_method() {
		// name = 
		// name = "아무개";
		// set_name("아무개"); // static 메소드 안에서는 일반 멤버에 접근 할 수 없음.
		cout << "스태틱 메소드 테스트" << endl;
	}
	static int get_count() {
		return count;
	}
	Person() {
		this->name = "아무개";
		count++;
	}
	virtual ~Person() {
		cout << "사람의 소멸자입니다." << endl;
		count--;
	}
	virtual void info() {
		cout << "사람입니다." << endl;
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
		cout << "학생의 소멸자입니다." << endl;
	}
	void info() {
		cout << "학생입니다." << endl;
	}
	void test() {
		cout << "학생의 test 함수" << endl;
	}
};

class Instructor : public Person {
public:
	~Instructor() {
		cout << "강사의 소멸자입니다." << endl;
	}
	void info() {
		cout << "강사입니다." << endl;
	}
};

int main() {
	// Person::info();
	// static 멤버는 모든 객체가 하나의 공간을 공유합니다.
	// name static 멤버 X => 객체 별로 공간이 따로 할당됨.
	// static_var static 멤버 O => 객체 별로 공간이 따로 할당되지 않고, 모든 객체가 같은 공간을 공유.
	Person::static_method();
	cout << Person::get_count() << endl;
	// int i = 0;

	Person p;
	p.info();
	p.static_method();

	Person p1;
	p1.set_name("홍길동");

	Person p2;

	cout << Person::get_count() << "명" << endl;

	Person* p3[5];
	for (int i = 0; i < 5; i++) {
		p3[i] = new Person();
	}

	cout << Person::get_count() << "명" << endl;

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}

	cout << Person::get_count() << "명" << endl;

	vector<Person*> persons = { new Person(), new Person() };

	cout << Person::get_count() << "명" << endl;

	persons.push_back(new Person());

	cout << Person::get_count() << "명" << endl;

	cout << persons.size() << "사이즈" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++) {
		delete persons.at(i);
		// delete persons[i];
	}

	for (int i = 0; i < size; i++) {
		persons.pop_back();
	}

	cout << Person::get_count() << "명" << endl;

	return 0;
}