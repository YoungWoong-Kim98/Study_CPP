#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
    string name;
public:
    Person() {
        this->name = "�ƹ���";
    }
    virtual ~Person() {
        cout << "����� �Ҹ��� �Դϴ�.\n";
    }
    virtual void info() {
        cout << "����Դϴ�.\n";
    }
    void set_name(string name) {
        this->name = name;
    }
    string get_name() {
        return name;
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
    //Person p1 = Student();
    Person* p = new Person();
    cout << p->get_name() << endl;
    // p->test();

    //Student* s1 = (Student*)p1;
    Student* s = (Student*)p;
    s->test();
    p->set_name("ȫ�浿");
    cout << s->get_name() << " " << p->get_name() << endl;
    s->set_name("������");
    cout << p->get_name() << " " << s->get_name() << endl;

    Student& s1 = *(Student*)p;
    s1.set_name("�ڵ�");
    cout << p->get_name() << " " << s1.get_name() << endl;

    Student s2 = *(Student*)p;
    s2.set_name("�ھ�");
    cout << p->get_name() << " " << s2.get_name() << endl;

    delete p;
    // ������ ����, ���� ���� ����
    int a = 1;
    int k = 2;
    int& b = a;
    int* c = &a;

    cout << a << " " << b << " " << *c << endl;

    b = k;

    cout << a << " " << b << " " << *c << endl;

    a = 3;

    cout << a << " " << b << " " << *c << endl;

    c = &k;
    k = 4;

    cout << a << " " << b << " " << *c << endl;


    //delete p;
    return 0;
}