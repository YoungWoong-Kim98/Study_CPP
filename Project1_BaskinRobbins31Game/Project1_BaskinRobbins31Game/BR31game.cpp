#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	while (count < 31) {
		cout << "���ڸ� �Է��� �ּ��� : ";
		cin >> num;
		if (num > 0 && num < 4) {
			cout << "����ڰ� �Է��� ����!\n";
			for (int i = num; i > 0; i--) {
				count++;
				cout << count << endl;
				if (count >= 31) {
					cout << "���� ����!! ��ǻ���� �¸� �Դϴ�!!";
				}
			}
				int num = rand() % 3 + 1;
				cout << "��ǻ�Ͱ� �θ� ����!\n";
			for (int i = num; i > 0; i--) {
				count++;
				cout << count << endl;
				if (count >= 31) {
					cout << "���� ����!! ������� �¸� �Դϴ�!!";
					i = 0;
				}
			}
		}
		else {
			cout << "1~3������ ���ڸ� �Է��� �ּ���.\n";
		}
	}
	return 0;
}