#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	int input_num[6] = {};
	int random_num[6] = {};
	int count_r = 0, count_i = 0, count = 0, inputnum = 0;
	while (count_r < 6) {
		bool is_dup = false;
		int num = rand() % 25 + 1;
		for (int i = 0; i < count_r; i++) {
			if (random_num[i] == num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {
			random_num[count_r] = num;
			count_r++;
		}
	}
	while (count_i < 6) {
		bool is_dup = false; 
		count++;
		cout << count << "번째 번호를 입력하세요 : ";
		cin >> inputnum;
		if (inputnum < 0 || inputnum > 25) {
			cout << "잘못 입력 하셨습니다.(1~25 사이 숫자를 입력해 주세요.)";
		}
		else {
			for (int j = 0; j < count_i; j++) {
				if (input_num[j] == inputnum) {
					is_dup = true;
					cout << "입력숫자가 중복되었습니다. 다시 입력해 주세요.\n";
					count--;
					break;
				}
			}
			if (!is_dup) {
				input_num[count_i] = inputnum;
				count_i++;
			}
		}
	}
		count = 0;
		cout << "랜덤 번호 공개!!\n";
		cout << "랜덤 입력 번호 : ";
		for (int i = 0; i < 6; i++) {
			cout << random_num[i] << " ";
		}
		cout << endl;
		cout << "사용자 입력 번호 : ";
		for (int i = 0; i < 6; i++) {
			cout << input_num[i] << " ";
		}
		for (int i = 0; i < 6; i++)
		{
			random_num[i];
			for (int j = 0; j < 6; j++)
			{
				if (random_num[i] == input_num[j])
				{
					count++;
				}
			}
		}
	
	cout << endl <<"1 ~ 7등까지 결과가 나올 수 있습니다.\n" << "결과 : " << 7 - count << "등입니다!";
	return 0;
}