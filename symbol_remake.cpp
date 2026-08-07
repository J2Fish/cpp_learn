#include <iostream>
#include <string>
using namespace std;

int main(){

    int* a;
    a = new int(10);
    cout << *a << endl;
    cout << &a << endl;
    cout << a << endl;
    delete a;

    return 0;
}
