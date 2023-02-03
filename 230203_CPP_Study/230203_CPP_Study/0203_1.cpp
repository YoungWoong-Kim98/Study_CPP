#include <iostream>
#include <string>
int main() {
	std::string friend1 = "홍길동";
	std::string friend2 = "성춘향";

	/*std::string friends[3];

	friends[0] = "홍길동";
	friends[1] = "성춘향";
	friends[1] = "코딩온";*/

	std::string friends[3] = { "홍길동", "성춘향", "코딩온"};

	for (int i = 0; i < 3; i++) {
		std::cout << friends[i] << std::endl;
	}

	// sizeof(friends) : sizeof 안에 변수 or type을 인자로 넘겨줌. 크기를 byte 단위로 구함.
	// sizeof(friends)/ sizeof(sfriends[0])
	for (int i = 0; i < sizeof(friends)/ sizeof(std::string); i++) {
		std::cout << friends[i] << std::endl;
	}

	for (std::string f : friends) {
		std::cout << f << std::endl;
	}

	//std::cout << friends[0];
	//std::cout << std::endl;

	/*int nums[3] = { 1, 2, 3 };
	std::cout << nums[2];*/

	double neums[4] = { 1.5, 2.5, 3.5 };
	//nums[3] = 4.5;


	/*std::string fruit[2][3][2] = { 
		{{"",""},{"o",""},{"",""}}, {{"",""}, {"",""}, {"",""}}
		};
	
	std::cout << fruit[0][1][0];*/

	std::string fruit[2][3] = {
		{"apple","banana","orange"}, {"apple2","banana2","orange2"}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j ++ ) {
			std::cout << fruit[i][j] << std::endl;
		}
	}

	for (auto &f : fruit) {
		for (std::string f2 : f) {
			std::cout << f2 << std::endl;
		}
	}

	std::cout << fruit[0][1] << std::endl;

	return 0;
}