#include<iostream>
#include<string>
#include<ctime>
using namespace std;
string word;
int main() {
    string a, b;
    string word = "hello";
    int n = word.size();
    a = word[0];
    b = word[n - 1];
    string c = "o";
	cout << a << endl;
	cout << b << endl;
    cout << c << endl;
    if (a.compare(b) == 0)
        cout << "s1 is equal to s2" << endl;

    if (a.compare(c) == 0)
        cout << "a is equal to c" << endl;

    if (b.compare(c) == 0)
        cout << "b is equal to c" << endl;

	return 0;
}