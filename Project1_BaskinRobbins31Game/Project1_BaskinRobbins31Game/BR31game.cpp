#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	int a = 0;
	string name;
	while (count < 31) {
		if (num == 0 && a == 0) {
			name = "��ǻ��";
			a = 1;
			cout << "���ڸ� �Է��� �ּ��� : ";
			cin >> num;
			if (num == 0 && num > 4) {
				cout << "1~3������ ���ڸ� �Է��� �ּ���.\n";
			}
			cout << "����ڰ� �Է��� ����!\n";
		}
		else if (num == 0 && a == 1) {
			name = "�����";
			a = 0;
			num = rand() % 3 + 1;
			cout << "��ǻ�Ͱ� �θ� ����!\n";
		}
	    for (int i = num; i > 0; i--) {
		count++, num--;
		cout << count << endl;
		    if (count == 31) {
			    cout << "���� ����!!" << name << "�� �¸� �Դϴ�!!";
				break;
	     	}
	    }
    }
	return 0;
}