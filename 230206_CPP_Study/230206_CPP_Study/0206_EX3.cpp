#include <iostream>
#include <string>
#include <vector>

int main() {

	int sum = 0;
	int i = 0;
	int num = 0;
	std::vector<int> v;
	std::cout << "사용자가 입력한 숫자 더하기";
	std::cout << std::endl;

	do {
		std::cout << "숫자를 입력하세요 (0:EXIT): ";
		std::cin >> num;
		v.push_back(num);
		sum = sum + v.at(i);
		i++;

	} while (num > 0);
	{
		std::cout << "사용자가 입력한 수의 합은: " << sum;
	}
	return 0;
}