#include <iostream>
int main() {

	/*
	// ������ *
	int* p;
	int n = 5;
	int i = 10;
	p = &n; // ������ p�� ���� n�� �޸� �ּҸ� ����

	// n�� �ּ� ���� ���
	std::cout << p << std::endl; 
	std::cout << &n << std::endl; 

	// n�� �ּҿ� �ԷµǾ� �ִ� ���� ���
	std::cout << n << std::endl; 
	std::cout << *p << std::endl; 

	n = 20;
	std::cout << p << std::endl; // ���� ����
	std::cout << *p << std::endl; // ���� ����

	*p = 30;
	std::cout << n << std::endl; // *p�� ���� �Է��Ͽ� n�� ���� ������ �� �ִ�.
	std::cout << *p << std::endl; // *p = n 

	p = &i;
	std::cout << n << std::endl;
	std::cout << *p << std::endl;
	*/
	/////////////////////////////////////////////////////////////////////////////
	/*
	int num;
	std::cin >> num;
	// int num_arry[num];
	int* p = &num;
	// *p = 20;
	int* num_arry = new int[num];

	int arr[5] = { 1,2,3,4,5 };
	std::cout << arr << std::endl;
	std::cout << arr[0] << std::endl;

	for (int i=0; i < num; i++) {
		// *(arr + i) = 1;
		num_arry[i] = 1;
	}

	for (int i = 0; i < num; i++) {
		std::cout << num_arry[i] << " ";
	}

	// �޸� ����� �ݳ� ����
	delete[] num_arry;
	delete p;
	*/
	/////////////////////////////////////////////////////////////////////////////
	/*
	// 2���� ���� �迭
	//num�� �޾Ƽ� num x num �迭
	int num;
	std::cin >> num;
	int** num_arr = new int* [num];

	//ũ�� ����
	for (int i = 0; i < num; i++) { 
		num_arr[i] = new int[num];
	}
	//{ { 1, 2 },{ 2, 4 } }

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			num_arr[i][j] = 1;
			std::cout << num_arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	// �迭 ����
	for (int i = 0; i < num; i++) {
		delete[]num_arr[i]; //����
	}
	delete[] num_arr; // �ٱ�
	*/
	/////////////////////////////////////////////////////////////////////////////

	return 0;
}