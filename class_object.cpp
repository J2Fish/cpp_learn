#include <iostream>
#include <string>
using namespace std;

class Person{
    






    public:
        int age;
        Person(int a ){
            age = a;
            cout << "per 含 a 参数的调用" << endl;
            
        }

        ~Person(){
            cout << "per 析构" << endl;
        }

        //拷贝构造
        Person(const Person* p){
            age = p -> age;
            cout <<  "拷贝构造" << endl;
            cout << 
        }

    
    
};


int main() {

    //括号法
    Person p(111);
    Person p2(p);
    cout << p2.age << "\t" << p.age << endl;

    //显示法
    //Person p1;
    //Person& a = new p;
    //delete &p;

    return 0;
}