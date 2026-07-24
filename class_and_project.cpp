#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include <cmath>

class Circle{
    //权限
    //公共权限

    public:
        const double PI = 3.14;
        int r;
    
        double calculatPerimeter(){
            return 2 * r *PI;
        }


        double calculatArea(){
            return r * r * PI;
        }

};
void Cir_test();

int main(){


    


    return 0;
}

void Cir_test(){
    Circle c1;
    c1.r = 222;
    double c = c1.calculatPerimeter();
    double s = c1.calculatArea();
    cout << fixed << setprecision(2);
    cout << "C = " << c << "\t"
         << "S = " << s
         <<endl;
}