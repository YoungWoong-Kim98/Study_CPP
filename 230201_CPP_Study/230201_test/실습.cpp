#include <iostream>
#include<string>
int main() {
	int a;
	int b;
	char c;
	std::cout << "������ ���� �� ���� �Է��� �ּ���.";
	std::cin >> a >> b;
	std::cout << "�����ڸ� �Է����ּ���. (+ - * /)";
	std::cin >> c;
	if (c == '+') {
		std::cout << a+b;
	}
	else if (c == '-') {
		std::cout << a-b;
	}
	else if (c == '*') {
		std::cout << a*b;
	}
	else if (c == '/') {
		std::cout << "������ --->��:" << a/b << "��������" << a%b << "�Դϴ�.";
	}
	else
		std::cout << "�߸��Է��ϼ̽��ϴ�.";
	return 0;
}