#include<iostream>
#include<string>
using namespace std;
class Character {
private:
	string name;
	int level;
	int item;
public:
	Character(string name) {
		this->name = name;
		level = 0;
		item = 0;
	}
	void name_c() {
		cout << "[�̸�����]" << "������ �̸� : ";
		cin >> name;
		cout << endl;
	}
	void level_u() {
		level++;
		cout << "[������!]" << "���緹�� : " << level;
		cout << endl;
	}
	void item_a() {
		item++;
		cout << "[������ ȹ��]" << "���� ������ ���� : " << item;
		cout << endl;
	}
	void item_u() {
		item--;
		cout << "[������ ���]" << "���� ������ ���� : " << item;
		cout << endl;
	}
	void c_data() {
		cout << "<ĳ���� ����>\n";
		cout << "�̸� : " << name << endl;
		cout << "���� : " << level << endl;
		cout << "������ ���� : " << item << endl;
	}

};

int main() {
	string name;
	int num = 1;
	cout << "ĳ������ �̸��� ���� �ּ���.\n" << "�̸� : ";
	cin >> name;
	Character c(name);
	while(num!=0){
		cout << "ĳ���� ����(1~5 �����Է�) : ";
		cin >> num;
		if (num == 1) {
			c.name_c();
		}
		if (num == 2) {
			c.level_u();
		}
		if (num == 3) {
			c.item_a();
		}
		if (num == 4) {
			c.item_u();
		}
		if (num == 5) {
			c.c_data();
		}
		else if (num == 0) {
			cout << "���� ����";
			break;
		}
	}
return 0;
}