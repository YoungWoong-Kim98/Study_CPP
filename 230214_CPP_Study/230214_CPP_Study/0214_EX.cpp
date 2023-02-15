#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	int lotto[6] = {};
	int count = 0;
	while (count < 6) {
		bool is_dup = false;
		int num = rand() % 45 + 1;
		for (int i = 0; i < count; i++) {
			if (lotto[i] == num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {
			lotto[count] = num;
			count++;
		}
	}
	cout << "이번 회차 복권 번호는 ";
	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
	}
	return 0;
}