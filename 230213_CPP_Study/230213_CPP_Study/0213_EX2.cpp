#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Snack {
protected:
	
	int expense;
public:
	string taste, form, name, company;
	static string get_name() {
		return 0;
	}
	string get_taste() {
		return taste;
	}
	string get_form() {
		return form;
	}

};

class Candy : public Snack {
public:
	string input;
	Candy() {}
	void set_taste() {
		cout << "���� �Է��ϼ���.";
		cin >> input;
	}
	void set_name(string taste) {
		cin >> form; "�� ����";
	}
};

class Chocolate : public Snack {
public:
	string input;
	Chocolate() {}
	void set_form() {
		cout << "����� �Է��ϼ���.";
		cin >> input;
	}
	void set_name(string form) {
		cin >> form; "��� ���ݸ�";
	}
};

	int main() {
		vector<Snack*> Snacks = { new Snack, new Snack };
		int num = 1;
		Snack snackBasket[20];
		if (num == !0) {
			cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.(1: ����, 2: ���ݸ�, 0: ����) : ";
			cin >> num;
			if (num == 1) {
				for (int i = 0; i < 20; i++) {
					Chocolate set_taste;
					snackBasket[i].get_name();
				}
			}
			if (num == 2) {
				for (int i = 0; i < 20; i++) {
					Chocolate set_form;
					snackBasket[i].get_name();
				}
			}
			cout << Snack::get_name();
		}
		return 0;
	}