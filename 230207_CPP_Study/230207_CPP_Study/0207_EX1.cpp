#include <iostream>
#include <string>
namespace seoul {
	std::string acode = "02";
	std::string lmark = "���꼭��Ÿ��";
}
namespace busan {
	std::string acode = "051";
	std::string lmark = "���ȴ뱳";
}

using namespace busan;

int main() {
	std::cout << "������ ������ȣ : " << seoul::acode << std::endl;
	std::cout << "������ ���帶ũ : " << seoul::lmark << std::endl;
	std::cout << "�λ��� ������ȣ : " << acode << std::endl;
	std::cout << "�λ��� ���帶ũ : " << lmark << std::endl;

	return 0;
}
