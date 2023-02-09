#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
std::ofstream file("member.txt");
std::ifstream file_r("member.txt");

bool checkFileOpen(std::ifstream & file) {
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return false;
	}
	else return true;
}

int main() {
	std::string input, pw;

	if (!checkFileOpen(file_r)) return -1;


	cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요.\n";
	
	for (int i = 1; i < 4; i++) {
		cout << i << "번째 회원 : ";
		cin >> input >> pw;
		file << input + " " + pw + "\n";
	}

	file.close();
	std::ifstream file_r("member.txt");
	if (!checkFileOpen(file_r)) return -1;

	std::string line, file_content = "";
	while (getline(file_r, line))
	{
		file_content += line + "\n";
	}
     cout << "----------회원 명부 파일 읽기----------\n";

	 cout << file_content;
	
	file.close();
	return 0;
}

