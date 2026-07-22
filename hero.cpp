#include<iostream>
#include<string>
using namespace std;

struct hero{
    string name;
    int age;
    string gender; 
};

void bubble_sort_hero_fname(hero* heros);
void out_heros(const hero* heros);

int main(){

    hero heros[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"}
    };
    bubble_sort_hero_fname(heros);
    out_heros(heros);

    return 0;
}


void bubble_sort_hero_fname(hero* const heros){
    for (int i = 4; i >= 0; i--){
        bool flag = true;
        for (int j = 0;j <= i-1; j++){
            hero temp;
            //cout << (int)j;
            if (heros[j].age >= heros[j+1].age){
                temp = heros[j];
                heros[j] = heros[j+1];
                heros[j+1] = temp;
                flag = false;
                
                }
            }
        if (flag) break;
        }
    }


void out_heros(const hero* heros){
    for (int i = 0; i <= 4; i++){
        cout << heros[i].name << "\t"
             << heros[i].age << "\t"
             << heros[i].gender << endl;
    }
}