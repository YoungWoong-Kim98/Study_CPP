#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
    string name;
public:
    virtual ~Person() {
        cout << "����� �Ҹ��� �Դϴ�.\n";
    }
    virtual void info() {
        cout << "����Դϴ�.\n";
    }
};

class Student : public Person {
    string stu_id;
public:
    ~Student() {
        cout << "�л��� �Ҹ��� �Դϴ�.\n";
    }
    void info() {
        cout << "�л��Դϴ�.\n";
    }
    void test() {
        cout << "�л��� test �Լ�\n";
    }
};
class Instructor : public Person {
public:
    ~Instructor() {
        cout << "������ �Ҹ��� �Դϴ�.\n";
    }
    void info() {
        cout << "�����Դϴ�.\n";
    }
};

    int main() {
    // ��ĳ����
    //Person s = Student();
    //s.info();

    //Person* ss = new Student();
    //ss->info();

    //delete ss;

    //Student stu; //���� �޸�
    //Person* sss = &stu;
    //sss->info();
    ////delete sss; // ������ �޸� �Ҵ� delete��� ���ʿ�. // delete���� ������ ���� �߻�.
    Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
    for (int i = 0; i < 3; i++) {
        per_arr[i]->info();
    }
    for (int i = 0; i < 3; i++) {
        delete per_arr[i];
    }

    return 0;
}