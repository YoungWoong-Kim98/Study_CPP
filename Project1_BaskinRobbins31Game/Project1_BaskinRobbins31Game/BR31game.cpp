#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	int a = 0;
	string name = "�����";
	while (count < 31) {
		if (name == "�����") {
			name = "��ǻ��";
			cout << "���ڸ� �Է��� �ּ��� : ";
			cin >> num;
			if (num == 0 && num > 4) {
				cout << "1~3������ ���ڸ� �Է��� �ּ���.\n";
			}
			cout << "����ڰ� �Է��� ����!\n";
		}
		else if (name == "��ǻ��") {
			name = "�����";
			num = rand() % 3 + 1;
			cout << "��ǻ�Ͱ� �θ� ����!\n";
		}
	    for (int i = num; i > 0; i--) {
		count++;
		cout << count << endl;
		    if (count == 31) {
			    cout << "���� ����!!" << name << "�� �¸� �Դϴ�!!";
				break;
	     	}
	    }
    }
	return 0;
}