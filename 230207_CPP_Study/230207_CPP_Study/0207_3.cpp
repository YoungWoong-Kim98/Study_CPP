#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
//input file stream -> ifstream
//output file stream -> ofstream

bool checkFileOpen(std::ifstream &file) {
	if (file.fail()) {
		cout << "���� ����" << endl;
		return false;
	}
	else return true;
}
int main() {
	std::ifstream file_r("test.txt");
	if (!checkFileOpen(file_r)) return -1;

	std::string line, file_content = "";
	while (std::getline(file_r, line)) {
		file_content += line + "\n";
	}
	cout << file_content;

	std::ofstream file("test1.txt");
	// ifstream : ���� -> ���α׷�
	// ofstream : ���α׷� -> ����
	// std::ofstream file;
	// file.open("test1.txt");
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	file << file_content;

	file.close();
	return 0;
}