
#include<iostream>
#include<string>

int main()
{
	// 정수
	int number1 = 5;
	short number2 = 10;
	long number3 = -10;

	// 실수
	float number4 = 3.14;
	double number5 = 3.141592;

	bool a = true;
	bool b = 0;

	char character1 = 100;
	char character2 = 'a';

	// 문자열
	std::string str = "hi";

	std::cout << "안녕하세요.\n";
	std::cout << std::endl;
	std::cout << number1;
	std::cout << std::endl;
	std::cout << number2;
	std::cout << std::endl;
	std::cout << number3;
	std::cout << std::endl;
	std::cout << number4;
	std::cout << std::endl;
	std::cout << number5;
	std::cout << std::endl;
	// bool type 출력
	std::cout << a;
	std::cout << std::endl;
	std::cout << b;
	std::cout << std::endl;
	// char string 출력
	std::cout << character1;
	std::cout << std::endl;
	std::cout << character2;
	std::cout << std::endl;
	std::cout << str;
	std::cout << std::endl;

	std::cout << "-----------------------";
	std::cout << std::endl;

	std::cout << str << number1 << number2 << std::endl;


	// 입력
	//int int1;
	//int int2;
	int int1;
	int int2;
	std::cout << "숫자 두 개를 입력해주세요.";
	std::cin >> int1;
	std::cin >> int2;

	std::cout << int1 + int2;
	std::cout << std::endl;

	std::cout << "-----------------------";
	std::cout << std::endl;


	// 실습문제
	int age;
	std::string name;

	std::cout << "이름을 입력하세요.";
	std::cin >> name;
	
	std::cout << "나이를 입력하세요.";
	std::cin >> age;
	std::cout << std::endl;
	//안녕하세요!--님 (--세)
	std::cout << "안녕하세요!" << name << "님!(" << age << "세)";
	std::cout << std::endl;
	

}
*/