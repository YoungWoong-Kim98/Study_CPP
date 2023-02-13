#include<iostream>
#include<string>
using namespace std;
class Snack {
protected:
	string taste, form, name, company;
	int expense;
public:
	string get_taste() {
		return taste;
	}
	string get_form() {
		return form;
	}
	int get_expense() {
		return expense;
	}
	string get_name() {
		return name;
	}
	string get_company() {
		return company;
	}
};

class Candy : public Snack {
public:
	Candy(string name) {
		this->name = name;
	}
};

class Chocolate : public Snack {
public:
	Chocolate(string name) {
		this->name = name;
	}
};

int main() {
	Snack snackBasket[4] = { Candy("阜措 荤帕"), Candy("全伙 牡叼"), Chocolate("颇海 檬内"), Chocolate("官农 檬内")};
	for (int i = 0; i < 4; i++) {
		cout << snackBasket[i].get_name() << endl;
	}
	return 0;
}