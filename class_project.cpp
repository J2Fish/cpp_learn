#include <iostream>
#include <string>
#include <array>
#include <cmath>
using namespace std;

double get_distance(array <double, 3> a, array <double, 3> b);



class Cube {
    private:
        double m_L;
        double m_W;
        double m_H;

    public:
        void __init__(int l, int w, int h){
            m_L = l;
            m_H = h;
            m_W = w;
        }
        double area(){
            double m_area = (m_L * m_H + m_W * m_L + m_H * m_W)*2;
            return m_area;
        }
        double volumn(){
            double m_volumn = m_L * m_W * m_H;
            return m_volumn;
        }
        array<double,3>  get_size(){
            array<double,3> id = {m_L, m_W, m_H};
            return id;
        } 

};

class point{
    private:
        double x;
        double y;
        double z;
    public:
        void __init__(double  x_, double y_,double z_){
            x = x_; y = y_; z = z_;
        }

        array <double, 3> get_coordinates(){
            array <double, 3> coor = {x, y, z};
            return coor;
        }

};

class circle{
    private:
        point p;
        double r;
        const double PI = 3.14;
    public:
        void __init__(double x, double y, double z, double r){
            p.__init__(x,y,z); r = r;
        }

        double get_area(){
            return r*r*PI;
        }

        double get_r(){
            return r;
        }

        point get_center(){
            return p;
        }

        array <double, 3> get_center_pos(){
            return p.get_coordinates();
        }
        
        string pos_rel(point a){
            double dis = get_distance(p.get_coordinates(),a.get_coordinates());
            if (dis < r) {
                return "in";
            }
            else if (dis == r){
                return "on";
            }
            else{
                return "out";
            }
        }
};



void test_cube();
bool Cube_compare(Cube* c1, Cube* c2);






int main(){

    test_cube();


    return 0;
}



void test_cube(){
    Cube a;
    a.__init__(10,10,10);
    cout << a.area() << "\t\n"
         << a.volumn() << "\t" 
         << endl;
    Cube b;
    b.__init__(10, 10, 8);
    cout << Cube_compare(&a, &b) << endl;
}

bool Cube_compare(Cube* c1, Cube* c2){
    bool flag;
    array<double,3> s1 =  (c1 -> get_size());
    array<double,3> s2 =  (c2 -> get_size());
    for (int i = 0; i <= 2; i++){
        flag = (s1[i] == s2[i]);
        if (!flag) break;
    }
    return flag;
}


double get_distance(array <double, 3> a, array <double, 3> b){
    double dis = 0;
    auto pos_a = a;
    auto pos_b = b;
    for (int i = 0; i <= 2; i++){
        dis += sqrt(pos_a[i] * pos_a[i] + pos_b[i] * pos_b[i]);
     }
     return dis;
}