// ทฃดýวั ผýภฺธฆ ปฬดย ฤฺตๅ
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	int lotto[7] = {};
	int count = 0;
	///////////////////////////
	while (count < 7) {
		bool is_dup = false;
		int num = rand() % 45 + 1;
		for (int i = 0; i < count; i++) {
			if (lotto[i]==num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {
			lotto[count] = num;
			count++;
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << lotto[i] << " ";
	}
	/*for (int i = 0; i < count; i++) {
		int num = rand() % 45 + 1;
		lotto[i] = num;
		for (int j = 0; j < i; j++) {
			if (lotto[j] == num) {
				i--;
			}
		}

	}
	for (int i = 0; i < 7; i++) {
		cout << lotto[i] << " ";
	}*/
	return 0;
}
