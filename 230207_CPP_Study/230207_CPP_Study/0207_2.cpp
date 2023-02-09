#include <iostream>
#include<fstream>
#include<string>

using std::ifstream;
using std::cout;
using std::endl;

int main() {
	ifstream file;
	file.open("test.txt"); // ���ϸ� �ش��ϴ� ���� ����
	// file.fail(); //���� ���� �Ϳ� �����ϸ� true. �����ϸ� false
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	cout << "�ƹ�����";

	std::string str, str2, line;
	//file >> str>>str2; // ���� �� ������ str�� ����

	/*while (file >> str >> str2) {
		cout << str << " " << str2;
		cout << endl;
	}*/

	//std::getline(file, line); // file�� ������ �� �پ� �о line�� ����. (\n ����)
	while (std::getline(file, line)) {
		cout << line << endl;
	}

	file.close();

	return 0;
}