#include <iostream>
#include<fstream>
#include<string>

using std::ifstream;
using std::cout;
using std::endl;

int main() {
	ifstream file;
	file.open("test.txt"); // 파일명에 해당하는 파일 열기
	// file.fail(); //파일 여는 것에 실패하면 true. 성공하면 false
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}

	cout << "아무글자";

	std::string str, str2, line;
	//file >> str>>str2; // 파일 안 내용을 str에 저장

	/*while (file >> str >> str2) {
		cout << str << " " << str2;
		cout << endl;
	}*/

	//std::getline(file, line); // file의 내용을 한 줄씩 읽어서 line에 저장. (\n 기준)
	while (std::getline(file, line)) {
		cout << line << endl;
	}

	file.close();

	return 0;
}