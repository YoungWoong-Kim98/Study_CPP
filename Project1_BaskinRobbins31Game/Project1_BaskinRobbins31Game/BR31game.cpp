#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	while (count < 31) {
		cout << "숫자를 입력해 주세요 : ";
		cin >> num;
		if (num > 0 && num < 4) {
			cout << "사용자가 입력한 숫자!\n";
			for (int i = num; i > 0; i--) {
				count++;
				cout << count << endl;
				if (count >= 31) {
					cout << "게임 종료!! 컴퓨터의 승리 입니다!!";
				}
			}
				int num = rand() % 3 + 1;
				cout << "컴퓨터가 부른 숫자!\n";
			for (int i = num; i > 0; i--) {
				count++;
				cout << count << endl;
				if (count >= 31) {
					cout << "게임 종료!! 사용자의 승리 입니다!!";
					i = 0;
				}
			}
		}
		else {
			cout << "1~3사이의 숫자를 입력해 주세요.\n";
		}
	}
	return 0;
}