// �߻� Ŭ���� : �߻� �޼ҵ带 �� �� �̻� ������ �ִ� Ŭ����
#include<iostream>
#include<string>
using namespace std;

class Elec { // �߻� Ŭ����
protected:

public:
	virtual void on() = 0; // �߻� �޼ҵ� (���� ���� �Լ�)
	// void off() { // ���� �Լ�
	virtual void off() = 0;
	void test() {
		cout << "test \n";
	}
};
class TV : public Elec { 
// �θ𿡼� ��� ���� ���� ���� �Լ��� �������� ���� ���, �ڽ� Ŭ���� ���� �߻� Ŭ������ ��
public:
	void on() {
		cout << "TV �ѱ�"<<endl;
	}
	void off() {
		cout << "TV ����" << endl;
	}
};
class Raidio : public Elec {
public:
	void on() {
		cout << "Raidio �ѱ�" << endl;
	}
	void off() {
		cout << "Raidio ����" << endl;
	}
};

int main() {
	//Elec elec; // �߻� Ŭ�����δ� ��ü�� ������ �� ����.
	/*TV tv();
	cout << tv.a;*/
	TV tv;
	Raidio raidio;
	tv.test();
	tv.on();
	tv.off();
	raidio.test();
	raidio.on();
	raidio.off();

	return 0;
}