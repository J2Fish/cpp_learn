#include "temp_.h"
#include <iostream>
#include <string>

template <class Name>
void Person<Name>::out_name(){
    cout << name << endl;
}