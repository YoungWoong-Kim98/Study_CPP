#include <iostream>
#include <string>
int main() {
	std::string friend1 = "ȫ�浿";
	std::string friend2 = "������";

	std::string friends[3];

	friends[0] = "ȫ�浿";
	friends[1] = "������";
	friends[1] = "�ڵ���";

	int i = 0;

	//::string friends[2] = { "ȫ�浿", "������" };
	std::cout << friends[0];
	std::cout << std::endl;

	/*int nums[3] = { 1, 2, 3 };
	std::cout << nums[2];*/

	double neums[4] = { 1.5, 2.5, 3.5 };
	//nums[3] = 4.5;

	std::string fruit[2][3] = {{ "apple", "grape", "" }, {"orange", "banana", "" }};

	return 0;
}