#include <iostream>

int main() {

	int i;
	int j=0;
	std::cout << "사용자가 입력한 숫자 더하기\n";
	do {
		std::cout << "숫자를 입력하세요 (0: exit) : ";
		std::cin >> i;
		j = i + j;
	} while (i > 0);
	std::cout << "사용자가 입력한 수의 합은 : " << j;
}




