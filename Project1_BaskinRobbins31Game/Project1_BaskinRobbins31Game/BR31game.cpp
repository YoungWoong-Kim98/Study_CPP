#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	// int a = 0;
	string name = "사용자"; 
	while (count < 31) {
		if (name == "사용자") { // while문 반복한번에 사용자, 컴퓨터 둘중 하나만 실행되게 하기위해
			name = "컴퓨터"; // 다음 반복때 컴퓨터 차례로 넘기기 위해 변수name에 컴퓨터를 입력
			                 // 강사님께 확인전에는 변수a값을 1,0로 바꾸면서 차례변경하였으나 변수name으로 대체 
			num = 0; // for문 실행용
			for (num; num < 1; num) { 
				cout << "숫자를 입력해 주세요 : ";
				cin >> num;
				if (num < 1 || num > 3) { // 1~3 외의 숫자 입력시 변수num에 0을 넣어 for문 반복
					cout << "1~3사이의 숫자를 입력해 주세요.\n";
					num = 0; 
				}
			}
			cout << "사용자가 입력한 숫자!\n";
		}
		else if (name == "컴퓨터") {
			name = "사용자"; // 다음 반복때 사용자 차례로 넘기기 위해 변수name에 사용자를 입력
			num = rand() % 3 + 1;
			cout << "컴퓨터가 부른 숫자!\n";
		}
	    for (int i = num; i > 0; i--) { // 강사님께 확인전에는 사용자, 컴퓨터 각각 하나씩 작성하였으나 하나로 수정
		count++;
		cout << count << endl;
		    if (count == 31) { // 카운중 31이되면 종료
			    cout << "게임 종료!!" << name << "의 승리 입니다!!";
				break;
	     	}
	    }
    }
	return 0;
}
