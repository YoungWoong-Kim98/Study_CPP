#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	int i = num;
	while (count < 31) {
		cout << "���ڸ� �Է��� �ּ��� : ";
		cin >> num;
		cout << "����ڰ� �Է��� ����!\n";
		if (num + count > 30) {
			count = 31;
			cout << count << endl;
			cout << "���� ����!! ��ǻ���� �¸� �Դϴ�!!";
			return 1;
		}
		int j = 1;
		if (num > 0 && num < 4) {
			for (i = num, j = j + i; i > 0; i--) {
				count++, j--;
				cout << count << endl;
				if (j == 1) {
					cout << "��ǻ�Ͱ� �θ� ����!\n";
				}
				if (j == 1 || count > 30) {
					num = rand() % 3 + 2;
					i = num;
					if (count > 30) {
						count = 31;
						cout << "���� ����!! ������� �¸� �Դϴ�!!";
						return 1;
					}
				}
			}
			
		}
		else {
			cout << "1~3������ ���ڸ� �Է��� �ּ���.\n";
			break;
		}
	}
 return 0;
}