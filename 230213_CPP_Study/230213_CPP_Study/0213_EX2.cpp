#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Snack {
protected:
	string name;
	static int count;
public:
	Snack() {
		count++;
	}
	static int get_count() {
		return count;
	}
	virtual void show_info() {
		cout << name << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
    string taste;
public:
	Candy(string taste) {
		this->taste = taste;
		this->name = "����";
	}

	void show_info() {
		cout << taste << "�� " << name << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape){
		this->shape = shape;
		this->name = "���ݸ�";
	}

	void show_info() {
		cout << shape << "���" << name << endl;
	}
};

	int main() {
		vector<Snack*> snack_basket;

		while(1) {
			int type;
			cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�(1:����, 2:���ݸ�, 0:����) : ";
			cin >> type;
			if (type == 1) {
				string taste;
				cout << "���� �Է��ϼ���. : ";
				cin >> taste;
				snack_basket.push_back(new Candy(taste));
			}
			else if (type == 2) {
				string shape;
				cout << "����� �Է��ϼ���. : ";
				cin >> shape;
				snack_basket.push_back(new Chocolate(shape));
			}
			else if (type == 0) {
				break;
			}
			else {
				cout << "0~2 ������ ���ڸ� �Է��ϼ���." << endl;
			}
		}
		cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�.\n";
		cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!\n";
		for (Snack* snack : snack_basket){
			snack->show_info();
		}
		return 0;
	}