#include <iostream>
int main() {

	/*
	// 포인터 *
	int* p;
	int n = 5;
	int i = 10;
	p = &n; // 포인터 p에 변수 n의 메모리 주소를 지정

	// n의 주소 값이 출력
	std::cout << p << std::endl; 
	std::cout << &n << std::endl; 

	// n의 주소에 입력되어 있는 값이 출력
	std::cout << n << std::endl; 
	std::cout << *p << std::endl; 

	n = 20;
	std::cout << p << std::endl; // 변함 없음
	std::cout << *p << std::endl; // 값이 변함

	*p = 30;
	std::cout << n << std::endl; // *p에 값을 입력하여 n의 값을 변경할 수 있다.
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

	// 메모리 사용후 반납 권장
	delete[] num_arry;
	delete p;
	*/
	/////////////////////////////////////////////////////////////////////////////
	/*
	// 2차원 동적 배열
	//num을 받아서 num x num 배열
	int num;
	std::cin >> num;
	int** num_arr = new int* [num];

	//크기 지정
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

	// 배열 해제
	for (int i = 0; i < num; i++) {
		delete[]num_arr[i]; //안쪽
	}
	delete[] num_arr; // 바깥
	*/
	/////////////////////////////////////////////////////////////////////////////

	return 0;
}