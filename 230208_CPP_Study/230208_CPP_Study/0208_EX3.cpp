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
		cout << "[이름변경]" << "변경할 이름 : ";
		cin >> name;
		cout << endl;
	}
	void level_u() {
		level++;
		cout << "[레벨업!]" << "현재레벨 : " << level;
		cout << endl;
	}
	void item_a() {
		item++;
		cout << "[아이템 획득]" << "현재 아이템 개수 : " << item;
		cout << endl;
	}
	void item_u() {
		item--;
		cout << "[아이템 사용]" << "현재 아이템 개수 : " << item;
		cout << endl;
	}
	void c_data() {
		cout << "<캐릭터 정보>\n";
		cout << "이름 : " << name << endl;
		cout << "레벨 : " << level << endl;
		cout << "아이템 개수 : " << item << endl;
	}

};

int main() {
	string name;
	int num = 1;
	cout << "캐릭터의 이름을 정해 주세요.\n" << "이름 : ";
	cin >> name;
	Character c(name);
	while(num!=0){
		cout << "캐릭터 조작(1~5 숫자입력) : ";
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
			cout << "게임 종료";
			break;
		}
	}
return 0;
}