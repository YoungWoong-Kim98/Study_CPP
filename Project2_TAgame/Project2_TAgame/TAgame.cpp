#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(void) {
	string word = "air";
	string a,b;
	int n = word.size();
	a = word[0];
	b = word[n - 1];
	cout << word;
	while (1) {
		cout << "���� �ܾ �Է�"
		clock_t startTime = clock();
		cin >> word;
		if (a.compare(b) == 0)
			cout << "s1 is equal to s2" << endl;

		if (a.compare(b) == 1)
			cout << "�߸��� �Է��Դϴ�." << endl;

		clock_t endTime = clock();
		if ((endTime - startTime) / CLOCKS_PER_SEC > 10) {
			cout << "Ÿ�Ӿƿ�";
		}
	}
	return 0;
}