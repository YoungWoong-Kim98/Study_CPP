#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	int input_num[6] = {};
	int random_num[6] = {};
	int count_r = 0, count_i = 0, count = 0, inputnum = 0;
	while (count_r < 6) {
		bool is_dup = false;
		int num = rand() % 25 + 1;
		for (int i = 0; i < count_r; i++) {
			if (random_num[i] == num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {
			random_num[count_r] = num;
			count_r++;
		}
	}
	while (count_i < 6) {
		bool is_dup = false; 
		count++;
		cout << count << "��° ��ȣ�� �Է��ϼ��� : ";
		cin >> inputnum;
		if (inputnum < 0 || inputnum > 25) {
			cout << "�߸� �Է� �ϼ̽��ϴ�.(1~25 ���� ���ڸ� �Է��� �ּ���.)";
		}
		else {
			for (int j = 0; j < count_i; j++) {
				if (input_num[j] == inputnum) {
					is_dup = true;
					cout << "�Է¼��ڰ� �ߺ��Ǿ����ϴ�. �ٽ� �Է��� �ּ���.\n";
					count--;
					break;
				}
			}
			if (!is_dup) {
				input_num[count_i] = inputnum;
				count_i++;
			}
		}
	}
		count = 0;
		cout << "���� ��ȣ ����!!\n";
		cout << "���� �Է� ��ȣ : ";
		for (int i = 0; i < 6; i++) {
			cout << random_num[i] << " ";
		}
		cout << endl;
		cout << "����� �Է� ��ȣ : ";
		for (int i = 0; i < 6; i++) {
			cout << input_num[i] << " ";
		}
		for (int i = 0; i < 6; i++)
		{
			random_num[i];
			for (int j = 0; j < 6; j++)
			{
				if (random_num[i] == input_num[j])
				{
					count++;
				}
			}
		}
	
	cout << endl <<"1 ~ 7����� ����� ���� �� �ֽ��ϴ�.\n" << "��� : " << 7 - count << "���Դϴ�!";
	return 0;
}