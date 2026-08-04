#include <iostream>
using namespace std;
#include <string>
class GoodGay;
class Building {
    //友元类
    friend class GoodGay;
    //全局函数做友元
    friend void Good_Gay(Building * building);
    public:
        string m_SittingRoom = "客厅";
        


    
    private:
        string m_BedRoom = "卧室";
    


};

void Good_Gay(Building* building){
    cout << building->m_BedRoom << endl;
}

class GoodGay{
    public:
        void visit();
        Building* building;

        string name;


};


void GoodGay::visit(){
    building = new Building;
    cout << "visiting" << building -> m_SittingRoom;
}



int main() {
    Building b;

    Good_Gay(&b);
    GoodGay gg;
    gg.visit();


    return 0;
}