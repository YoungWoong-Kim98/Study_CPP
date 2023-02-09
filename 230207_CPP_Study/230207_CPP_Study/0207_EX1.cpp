#include <iostream>
#include <string>
namespace seoul {
	std::string acode = "02";
	std::string lmark = "남산서울타워";
}
namespace busan {
	std::string acode = "051";
	std::string lmark = "광안대교";
}

using namespace busan;

int main() {
	std::cout << "서울의 지역번호 : " << seoul::acode << std::endl;
	std::cout << "서울의 랜드마크 : " << seoul::lmark << std::endl;
	std::cout << "부산의 지역번호 : " << acode << std::endl;
	std::cout << "부산의 랜드마크 : " << lmark << std::endl;

	return 0;
}
