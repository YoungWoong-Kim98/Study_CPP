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
		cout << "���� ����" << endl;
		return false;
	}
	else return true;
}

int main() {
	std::string input, pw;

	if (!checkFileOpen(file_r)) return -1;


	cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���.\n";
	
	for (int i = 1; i < 4; i++) {
		cout << i << "��° ȸ�� : ";
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
     cout << "----------ȸ�� ��� ���� �б�----------\n";

	 cout << file_content;
	
	file.close();
	return 0;
}

