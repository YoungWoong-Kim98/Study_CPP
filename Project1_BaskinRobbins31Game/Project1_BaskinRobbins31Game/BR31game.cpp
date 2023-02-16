#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	int a = 0;
	string name;
	while (count < 31) {
		if (num == 0 && a == 0) {
			name = "컴퓨터";
			a = 1;
			cout << "숫자를 입력해 주세요 : ";
			cin >> num;
			if (num == 0 && num > 4) {
				cout << "1~3사이의 숫자를 입력해 주세요.\n";
			}
			cout << "사용자가 입력한 숫자!\n";
		}
		else if (num == 0 && a == 1) {
			name = "사용자";
			a = 0;
			num = rand() % 3 + 1;
			cout << "컴퓨터가 부른 숫자!\n";
		}
	    for (int i = num; i > 0; i--) {
		count++, num--;
		cout << count << endl;
		    if (count == 31) {
			    cout << "게임 종료!!" << name << "의 승리 입니다!!";
				break;
	     	}
	    }
    }
	return 0;
}