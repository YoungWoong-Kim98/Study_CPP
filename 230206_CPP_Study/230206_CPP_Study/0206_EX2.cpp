#include <iostream>
#include <string>
#include <vector>

int main() {

	int x, y;
	int i = 0;

	while (1) {
		std::cout << "x�� �Է��ϼ���: ";
		std::cin >> x;
		std::cout << "y�� �Է��ϼ���: ";
		std::cin >> y;
		if (x > 0 && y > 0)break;
		else std::cout << "�� �� ��� ����� �Է����ּ���";
	}

	std::vector<std::vector<int>> v2;
	v2.assign(x, std::vector<int>(y, i));

	int num = 1;
	for (int i = 0; i < v2.size(); i++) {
		for (int j = 0; j < v2.at(i).size(); j++) {
			v2.at(i).at(j) = num++;
			std::cout << v2[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
