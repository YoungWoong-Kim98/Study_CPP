#include <iostream>
#include <string>
#include <vector>

int main() {

	int sum = 0;
	int i = 0;
	int num = 0;
	std::vector<int> v;
	std::cout << "����ڰ� �Է��� ���� ���ϱ�";
	std::cout << std::endl;

	do {
		std::cout << "���ڸ� �Է��ϼ��� (0:EXIT): ";
		std::cin >> num;
		v.push_back(num);
		sum = sum + v.at(i);
		i++;

	} while (num > 0);
	{
		std::cout << "����ڰ� �Է��� ���� ����: " << sum;
	}
	return 0;
}