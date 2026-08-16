#include <fstream>
#include <iostream>
using namespace std;

class Person {
    public:
        char m_Name[64]; // 不用string，会有问题
        int m_Age;

};

void test01(){
    ofstream ofs("test.txt", ios::out| ios::binary); //构造函数初始化
    for (int i = 0; i <= 2; i++){
        Person p = {"aaa", i};
        ofs.write((const char*) &p, sizeof(Person));
    }
    ofs.close();
}
void test02(){
    ifstream ifs;
    ifs.open("test.txt", ios::in | ios::binary);
    if (! ifs.is_open()){
        return;
    }
    Person p;
    while (ifs.read((char*) &p, sizeof(Person))){
        cout << ifs.eof() <<endl;
        cout << p.m_Name << p.m_Age <<endl;
    }
    ifs.close();

}
int main() {
    test01();
    test02();
}
