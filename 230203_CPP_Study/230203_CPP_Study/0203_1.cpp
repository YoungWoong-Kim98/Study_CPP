#include <iostream>
#include <string>
int main() {
	std::string friend1 = "全辨悼";
	std::string friend2 = "己冕氢";

	std::string friends[3];

	friends[0] = "全辨悼";
	friends[1] = "己冕氢";
	friends[1] = "内爹柯";

	int i = 0;

	//::string friends[2] = { "全辨悼", "己冕氢" };
	std::cout << friends[0];
	std::cout << std::endl;

	/*int nums[3] = { 1, 2, 3 };
	std::cout << nums[2];*/

	double neums[4] = { 1.5, 2.5, 3.5 };
	//nums[3] = 4.5;

	std::string fruit[2][3] = {{ "apple", "grape", "" }, {"orange", "banana", "" }};

	return 0;
}