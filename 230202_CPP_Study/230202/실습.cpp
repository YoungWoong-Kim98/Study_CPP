#include <iostream>

int main() {

	int i;
	int j=0;
	std::cout << "����ڰ� �Է��� ���� ���ϱ�\n";
	do {
		std::cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
		std::cin >> i;
		j = i + j;
	} while (i > 0);
	std::cout << "����ڰ� �Է��� ���� ���� : " << j;
}




