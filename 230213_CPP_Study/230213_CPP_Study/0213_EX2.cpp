#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;

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
		cout << "출력출력" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	string taste;
public:
	Candy(string taste) {
		this->taste = taste;
		this->name = "사탕";
	}

	void show_info() {
		cout << taste << "맛 " << name << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->shape = shape;
		this->name = "초콜릿";
	}

	void show_info() {
		cout << shape << "모양 " << name << endl;
	}
};

int main() {
	std::vector<Snack*> snack_basket;

	/*Snack s = Snack();
	s.name
	Snack::count

	Snack s1 = Snack();
	s1.name
	s1.count*/

	while (1) {
		int type;
		cout << "과자 바구니에 추가할 간식을 고르시오(1:사탕, 2:초콜릿, 0:종료) : ";
		cin >> type;
		if (type == 1) {
			string taste;
			cout << "맛을 입력하세요. : ";
			cin >> taste;
			snack_basket.push_back(new Candy(taste));
		}
		else if (type == 2) {
			string shape;
			cout << "모양을 입력하세요. : ";
			cin >> shape;
			snack_basket.push_back(new Chocolate(shape));
		}
		else if (type == 0) {
			break;
		}
		else {
			cout << "0~2 사이의 숫자를 입력하세요." << endl;
		}
	}

	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다.\n";

	cout << "과자 바구니에 담긴 간식 확인하기!\n";

	//int size = snack_basket.size();
	//for (int i = 0; i < size; i++) {
	//	snack_basket[i]->show_info();
	//}

	//for (int i = 0; i < size; i++) {
	//	delete snack_basket[i];
	//}

	for (Snack* snack : snack_basket) {
		snack->show_info();
	}

	for (Snack* snack : snack_basket) {
		delete snack;
	}

	snack_basket.clear();

	return 0;
}