/*
#include <iostream>
#include <string>

//int main() {
//	if (5 > 3) {
//		std::cout << "��\n";
//	}

	//int a;
	//std::cin >> a;
	//std::cout << std::endl;
	//if (a < 10) {
	// 
	//	std::cout << "�Է��� ���� 10���� Ů�ϴ�.";
	//}
	//else if (a == 10) {
	//	std::cout << "10�� �Է��ϼ̱���!";
	//}
	//else {
	//	std::cout << "�Է��� ���� 10���� Ů�ϴ�.";
	//}
	//
//int main() {
//    (a > 100 || a < 0) {
//		std::cout << "�Է°��� �߸��Ǿ����ϴ�.\n";
//	}
//	else if (a >= 90) {
//		std::cout << "A";
//	}
//	else if (a >= 80) {
//		std::cout << "B";
//	}
//	else if (a >= 70) {
//		std::cout << "C";
//	}
//	else if (a >= 60) {
//		std::cout << "D";
//	}
//	else {
//		std::cout << "F.";
//	}
//	std::cout << std::endl;

	//��ø�� if��
int main() {
	//std::string userld, userPw;
	//std::string inputld = "user01", inputPw = "1234";
	//std::cout << "���̵� �Է����ּ���.";
	//std::cin >> userld;
	//std::cout << "��й�ȣ�� �Է����ּ���.";
	//std::cin >> userPw;

	//if (userld == inputld) {
	//	if (userPw == inputPw) {
	//		std::cout << "�α��� ����!!!\n";
	//	}
	//	else {
	//		std::cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�.\n�α��� ����!!\n";
	//	}
	//}

	//switch��
	int a;
	std::cout << "���� �Է��ϼ���.";
	std::cin >> a;
	switch (a) {
	case 3:
		std::cout << "3�Դϴ�,";
		break;
	case 5:
		std::cout << "5�Դϴ�,";
		break;
	default:
		std::cout << "������ ���� �ƴմϴ�..";
		break;
	}
	//����ȯ�� ���α׷� -> switch��
	char grade;
	switch (a / 10) {
	case 9:
		std::cout << 'A';
		grade = 'A';
		break;
	case 8:
		std::cout << 'B';
		grade = 'B';
		break;
	case 7:
		std::cout << 'C';
		grade = 'C';
		break;
	case 6:
		std::cout << 'D';
		grade = 'D';
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		std::cout << 'F';
		grade = 'F';
		break;
	default:
		std::cout << "������ ������ 0~99 �Դϴ�.";
	}
	std::cout << std::endl;
	grade == 'F' ? std::cout << "�����" : std::cout << "�� ���߾��.";

	if (grade == 'F') {
		std::cout << "�����";
	}
	else {
		std::cout << "�� ���߾��.";
	}
	// Ȧ�� ¦�� ��� ���α׷� �ۼ��ϱ�
	// ���ڸ� �Է¹ް�
	// �Է¹��� ���� Ȧ����� "Ȧ���Դϴ�." ���
	// �Է¹��� ���� ¦����� "¦���Դϴ�." ���
	if (a % 2 == 0) {
		std::cout << "¦���Դϴ�.";
	}
	else {
		std::cout << "Ȧ���Դϴ�.";
	}
	(a % 2 == 1) ? std::cout << "Ȧ��" : std::cout << "¦��";
}
*/