#include <iostream>
using namespace std;
#include "temp_.cpp"

void test01(){
    Person<string>p("Mace");
    p.out_name();
}

int main(){
    test01();
    return 0;
}