#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(void) {

	string word;
	string words = {"air"};
	int ea = 0; ///개수
	
	while (1) {
		int n = words.size();
		cout << words << endl;
		cout << "다음 단어를 입력하세요 : ";
		clock_t startTime = clock();
		cin >> word;
		clock_t endTime = clock();
		if ((endTime - startTime) / CLOCKS_PER_SEC > 10) {
			cout << "타임오버\n" << endl;
			cout << "게임 종료!\n" << "총 입력한 단어 개수 : " << ea;
			break;
		}
		else if (word[0] == words[n - 1]) {
			words += " --> " + word;
			ea++;
		}
		else {
			cout << "잘못된 입력입니다." << endl;
		}
	}
	return 0;
}
