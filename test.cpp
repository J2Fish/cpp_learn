#include <iostream>
#include <string>
using namespace std;

void test(const int* a){
    cout << "const int " << endl;

}

void test(int* a){
    cout << "int" << endl;
}



int main() {
    const int*  a = new int(11);
    test(a);



    return 0;
};