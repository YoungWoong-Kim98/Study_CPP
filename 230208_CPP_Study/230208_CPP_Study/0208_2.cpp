// class Ŭ���� (�⺻������ private)
#include<iostream>
#include<string>
using namespace std;
class Animal {
	string jong;

};
class Dog {

};
class Cat { // �⺻������ ��������
	string name;
	int age;
public: 
	Cat(string name, string jong) { // ������
		this->name = name;
		this->jong = jong;
	}
	void mew() { // �޼ҵ�
		cout << "�߿�\n";
	}
	void eat() {
		cout << "������ �Դ´�\n";
	}
	string get_name() {
		return name;
	}
	string get_jong() {
		return jong;
	}
	int get_age() {
		return age;
	}
	void set_name(string name) { // setName
		this->name = name;
	}
	void set_jong(string jong) { 
		this->name = jong;
	}
	void set_age(int age) { 
		this->age = age;
	}
};
// Cat�̶�� Ŭ������ �ν��Ͻ� ����
// c�� ��ü
int main() {
	Cat c("����", "�丣�þ�"); // c�� ��ü, �ν��Ͻ�. �� ������ Cat�� ������ �����.
	//Cat c = Cat();
	//c.age = 5;
	c.set_age(5);
	c.set_name("ġ��");
	//string name = c.name
	string name = c.get_name();
	string jong = c.get_jong();
	int age = c.get_age();
	//cout << name << " " << jong << " " << age << endl;
	cout << c.get_name() << " " << c.get_jong() << " " << c.get_age() << endl;
	c.mew();
	c.eat();
	

	return 0;
}