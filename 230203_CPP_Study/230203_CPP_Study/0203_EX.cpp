#include <iostream>
#include <string>

int main() {
	/*std::string city[5] = { "korea", "japan", "usa", "uk", "australia" };
	
	for (int i = 0; i < 5; i++) {
		std::cout << city[i] << std::endl;
	}*/
	double j = 0;
	int grade[5];
	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "�� �л��� ������ �Է��ϼ��� : ";
		std::cin >> grade[i];
		j = grade[i] + j;
	}
	std::cout << "���� ��� : " << j / 5;
	return 0;
}