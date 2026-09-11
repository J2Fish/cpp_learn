#include <iostream>
using namespace std;

template<class T1>
class eg;

template <class T1>
void test01(eg<T1> eg1);

template<class T1>
class eg
{
public:
    eg(T1 name) : name(name) {}
    friend void test01<>(eg<T1> eg1);
private:
    T1 name;
};

template <class T1>
void test01(eg<T1> eg1) {
    cout << eg1.name << endl;
}

