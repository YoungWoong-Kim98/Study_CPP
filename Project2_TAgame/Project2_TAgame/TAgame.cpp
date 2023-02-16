#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(void) {
	string word;
	string a,b;
	int n = word.size();
	a = word[0];
	b = word[n - 1];
	while (1) {
		clock_t startTime = clock();
		cin >> a;
		if (a.compare(b) == 0)
			cout << "s1 is equal to s2" << endl;

		if (a.compare(c) == 0)
			cout << "a is equal to c" << endl;
		clock_t endTime = clock();
		if ((endTime - startTime) / CLOCKS_PER_SEC > 10) {
			cout << "е╦юс╬ф©Т";
		}
	}
	return 0;
}