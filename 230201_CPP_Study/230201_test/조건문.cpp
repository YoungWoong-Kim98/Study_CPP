/*
#include <iostream>
#include <string>

//int main() {
//	if (5 > 3) {
//		std::cout << "얍\n";
//	}

	//int a;
	//std::cin >> a;
	//std::cout << std::endl;
	//if (a < 10) {
	// 
	//	std::cout << "입력한 수가 10보다 큽니다.";
	//}
	//else if (a == 10) {
	//	std::cout << "10을 입력하셨군요!";
	//}
	//else {
	//	std::cout << "입력한 수가 10보다 큽니다.";
	//}
	//
//int main() {
//    (a > 100 || a < 0) {
//		std::cout << "입력값이 잘못되었습니다.\n";
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

	//중첩된 if문
int main() {
	//std::string userld, userPw;
	//std::string inputld = "user01", inputPw = "1234";
	//std::cout << "아이디를 입력해주세요.";
	//std::cin >> userld;
	//std::cout << "비밀번호를 입력해주세요.";
	//std::cin >> userPw;

	//if (userld == inputld) {
	//	if (userPw == inputPw) {
	//		std::cout << "로그인 성공!!!\n";
	//	}
	//	else {
	//		std::cout << "비밀번호가 틀렸습니다.\n로그인 실패!!\n";
	//	}
	//}

	//switch문
	int a;
	std::cout << "수를 입력하세요.";
	std::cin >> a;
	switch (a) {
	case 3:
		std::cout << "3입니다,";
		break;
	case 5:
		std::cout << "5입니다,";
		break;
	default:
		std::cout << "예상한 수가 아닙니다..";
		break;
	}
	//점수환산 프로그램 -> switch문
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
		std::cout << "점수의 범위는 0~99 입니다.";
	}
	std::cout << std::endl;
	grade == 'F' ? std::cout << "재수강" : std::cout << "참 잘했어요.";

	if (grade == 'F') {
		std::cout << "재수강";
	}
	else {
		std::cout << "참 잘했어요.";
	}
	// 홀수 짝수 출력 프로그램 작성하기
	// 숫자를 입력받고
	// 입력받은 수가 홀수라면 "홀수입니다." 출력
	// 입력받은 수가 짝수라면 "짝수입니다." 출력
	if (a % 2 == 0) {
		std::cout << "짝수입니다.";
	}
	else {
		std::cout << "홀수입니다.";
	}
	(a % 2 == 1) ? std::cout << "홀수" : std::cout << "짝수";
}
*/