#include <iostream>

int main() {
	int x, y;

	while (1) {
		std::cout << "x�� �Է�: ";
		std::cin >> x;
		std::cout << "y�� �Է�: ";
		std::cin >> y;
		if (x > 0 && y > 0)break;
		else std::cout << "�� �� ��� ����� �Է����ּ���";
	}

	int** arr = new int* [x];
	for (int i = 0; i < x; i++) {
		arr[i] = new int[y];
	}
	
	int num = 1;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = num++;
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < x; i++) {
		delete[] arr[i]; //����
	}
	delete[] arr;
	return 0;
}