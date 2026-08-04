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



class Person{
    public:
        string name;
        void set_password(int password){
            password = password;
        }
    protected:
        string car;
        void set_car(string car_){
            car = car_;
        }
    private:
        int password;
        


};





int main(){
    Person pp;
    pp.name = "Mace";
    pp.set_password(111111);
    


    return 0;
}



