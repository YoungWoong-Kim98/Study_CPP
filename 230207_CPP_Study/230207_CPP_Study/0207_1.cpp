#include <iostream>

namespace ns_test {
	int num = 0;
	void test() {
		std::cout << num << std::endl;
		std::cout << "hello world" << std::endl;
	}
}

void bbb() {
	ns_test::num = 7;
	std::cout << "aaa";
}

//using namespace std; // std ���ӽ����̽� ���� �ִ� ��� ��ҿ� ���� ������ Ǯ����.
//using namespace ns_test;

using namespace ns_test;

void aaa() {
	num = 7;
	std::cout << "aaa : " << ns_test::num;
}

int main() {
	num = 5;
	test();
	aaa();

	return 0;
}