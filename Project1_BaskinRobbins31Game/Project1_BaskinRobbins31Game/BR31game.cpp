#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	int i = num;
	while (count < 31) {
		cout << "숫자를 입력해 주세요 : ";
		cin >> num;
		cout << "사용자가 입력한 숫자!\n";
		if (count == 30) {
			count = 31;
			cout << count << endl;
			cout << "게임 종료!! 컴퓨터의 승리 입니다!!";
			break;
		}
		int j = 1;
		if (num > 0 && num < 4) {
			for (i = num, j = j + i; i > 0; i--) {
				count++, j--;
				cout << count << endl;
				if (j == 1 && count < 27) {
					cout << "컴퓨터가 부른 숫자!\n";
					num = rand() % 3 + 2;
					i = num;
				}
				if (j == 1 && count == 30) {
					count = 31;
					cout << count << endl;
					cout << "게임 종료!! 사용자의 승리 입니다!!";
					break;
				}
				if (j == 1 && count == 29) {
					cout << "컴퓨터가 부른 숫자!\n";
					num++;
					i = num;
				}
				if (j == 1 && count == 28) {
					cout << "컴퓨터가 부른 숫자!\n";
					num = num + 2;
					i = num;
				}
				if (j == 1 && count == 27) {
					cout << "컴퓨터가 부른 숫자!\n";
					num = num + 3;
					i = num;
				}
			}
		}
		else {
			cout << "1~3사이의 숫자를 입력해 주세요.\n";
		}
	}
 return 0;
}