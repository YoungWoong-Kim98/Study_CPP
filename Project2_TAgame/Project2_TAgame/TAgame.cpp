#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(void) {
	string word = "air";
	string a,b;
	int n = word.size();
	
	cout << word;
	while (1) {
		string word = "air";
		b = word[n - 1];
		cout << "���� �ܾ �Է�";
		clock_t startTime = clock();
		cin >> word;
		a = word[0];
		if (a.compare(b) == 0)
			cout << "000" << endl;

		if (a.compare(b) == 1)
			cout << "�߸��� �Է��Դϴ�." << endl;

		clock_t endTime = clock();
		if ((endTime - startTime) / CLOCKS_PER_SEC > 10) {
			cout << "Ÿ�Ӿƿ�";
		}
	}
	return 0;
}