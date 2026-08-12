#include <iostream>
#include <string>
using namespace std;

class AbstractDrink{
    public:
        virtual void heat_water(){
            cout << "heat the water" << endl;
        }
        virtual void brew() = 0;
        virtual void pour_into(){
            cout << "pour the drink into the cup" << endl;
        }
        virtual void add_element() = 0;

};

class Coffee : public AbstractDrink{
    public:
        void brew(){
            cout << "brew the coffee" << endl;
        }

        void add_element(){
            cout << "add milk and sugar" << endl;
        }
};

class Tea : public AbstractDrink{
    public:
        void brew(){
            cout << "brew the Tea" << endl;
        }

        void add_element(){
            cout << "add lemon" << endl;
        }
};

int main(){

    



    return 0;
}