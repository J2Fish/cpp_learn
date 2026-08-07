#include <iostream>
#include <string>
#include <format>
using namespace std;


bool test_vocter();
bool test_money();

class Vector{
    public:
        int x;
        int y;
        Vector operator+(Vector& a){
            
            int x = a.x + this->x;
            int y = a.y + this->y;
            Vector c(x,y);
            return c;
        }

        bool operator==(Vector& a){
            int len_a = a.x * a.x + a.y * a.y;
            int len_b = this->x*this->x + this->y*this->y;
            return len_a == len_b;
        }

        

        Vector(int x, int y):x(x),y(y){};
};

class Money{
    public:
        Money(int y, int j, int c):y(y),j(j),c(c){
            
        }
        
        Money operator+(Money a){
            Money m(a.y+this->y,a.j+this->j,a.c+this->c);
            return m;
        }
        
        string format_out(){
            string str = format("{}元{}角{}分",this->y, this->j, this->c);
            return str;
        }
    private:
        int y;
        int j;
        int c;
};


int main(){
    
    
    
    
    
    
    
    return 0;

}


ostream& operator<<(ostream& cout, Vector& v){
    cout << "(" << v.x << "," << v.y << ")" <<endl;
    return cout;
};

istream& operator>>(istream& cin, Vector& v){
    
    cout << "请输出x坐标 >" << endl;
    cin >> v.x;
    cout << "请输出y坐标 >" << endl;
    cin >> v.y;

    return cin;
};