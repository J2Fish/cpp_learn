#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        int number;
    
    void display(){
        cout << "name: " << name << "\t\n"
             << "number: " << number << "\t"
             << endl;
    }

    void input(string name_){
        name = name_;
    }

    void input(int number_){
        number = number_;
    }
};

int main(){

    Student stu;
    stu.input("Mace");
    stu.input(14);
    stu.display();


    return 0;
}