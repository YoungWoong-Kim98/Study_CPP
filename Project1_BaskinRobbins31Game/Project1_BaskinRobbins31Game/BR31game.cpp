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
		if (count == 30) {
			count = 31;
			cout << count << endl;
			cout << "���� ����!! ��ǻ���� �¸� �Դϴ�!!";
			break;
		}
		int j = 1;
		if (num > 0 && num < 4) {
			for (i = num, j = j + i; i > 0; i--) {
				count++, j--;
				cout << count << endl;
				if (j == 1 && count < 27) {
					cout << "��ǻ�Ͱ� �θ� ����!\n";
					num = rand() % 3 + 2;
					i = num;
				}
				if (j == 1 && count == 30) {
					count = 31;
					cout << count << endl;
					cout << "���� ����!! ������� �¸� �Դϴ�!!";
					break;
				}
				if (j == 1 && count == 29) {
					cout << "��ǻ�Ͱ� �θ� ����!\n";
					num++;
					i = num;
				}
				if (j == 1 && count == 28) {
					cout << "��ǻ�Ͱ� �θ� ����!\n";
					num = num + 2;
					i = num;
				}
				if (j == 1 && count == 27) {
					cout << "��ǻ�Ͱ� �θ� ����!\n";
					num = num + 3;
					i = num;
				}
			}
		}
		else {
			cout << "1~3������ ���ڸ� �Է��� �ּ���.\n";
		}
	}
 return 0;
}