
#include<iostream>
#include<string>

int main()
{
	// ����
	int number1 = 5;
	short number2 = 10;
	long number3 = -10;

	// �Ǽ�
	float number4 = 3.14;
	double number5 = 3.141592;

	bool a = true;
	bool b = 0;

	char character1 = 100;
	char character2 = 'a';

	// ���ڿ�
	std::string str = "hi";

	std::cout << "�ȳ��ϼ���.\n";
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
	// bool type ���
	std::cout << a;
	std::cout << std::endl;
	std::cout << b;
	std::cout << std::endl;
	// char string ���
	std::cout << character1;
	std::cout << std::endl;
	std::cout << character2;
	std::cout << std::endl;
	std::cout << str;
	std::cout << std::endl;

	std::cout << "-----------------------";
	std::cout << std::endl;

	std::cout << str << number1 << number2 << std::endl;


	// �Է�
	//int int1;
	//int int2;
	int int1;
	int int2;
	std::cout << "���� �� ���� �Է����ּ���.";
	std::cin >> int1;
	std::cin >> int2;

	std::cout << int1 + int2;
	std::cout << std::endl;

	std::cout << "-----------------------";
	std::cout << std::endl;


	// �ǽ�����
	int age;
	std::string name;

	std::cout << "�̸��� �Է��ϼ���.";
	std::cin >> name;
	
	std::cout << "���̸� �Է��ϼ���.";
	std::cin >> age;
	std::cout << std::endl;
	//�ȳ��ϼ���!--�� (--��)
	std::cout << "�ȳ��ϼ���!" << name << "��!(" << age << "��)";
	std::cout << std::endl;
	

}
*/