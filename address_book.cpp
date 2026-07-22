#include <iostream>
#include <string>
using namespace std;


struct person{
    string name;
    string sex;
    string age;
    string tele;
    string home;
    bool empty = 1;
};

void output(const person* person_);
void output_all(person address_book[]);
void add(person address_book[], person new_);
void del(person address_book[], string name);
int search(person address_book[], string name);
int to_end(person address_book[]);
void revise_key_value(person address_book[], string name, int key, string value );
void revise_person(person address_book[], string name, person revise);
void clear(person address_book[]);





int main(){
    //system("pause");
    
    person example1 = {
        "A", "man", "16", "10086", "home"
    };
    person example2 = {
        "B", "man", "16", "10086", "home"
    };
    person adb[1000];
    for (int i = 0; i < 500; i++){
        add(adb, example1);
    }
    output_all(adb);
    search(adb,"A");
    revise_person(adb, "A", example2);
    output_all(adb);
    revise_key_value(adb, "B", 2, "09");
    output_all(adb);
    for (int i = 0; i < 500; i++){
        add(adb, example1);
    }
    output_all(adb);
    del(adb, "B");
    output_all(adb);
    clear(adb);
    output_all(adb);

    





    //system("pause");


    return 0; 
}

void output(const person* person_){
    const person* p = person_;
    cout << p -> name << "\t" 
             << p -> sex << "\t" 
             << p -> age << "\t" 
             << p -> tele << "\t" 
             << p -> home << "\t" 
             << endl;
}

void output_all(person address_book[]){
    const person* adb_p = address_book;
    cout << "address_book diaplay:" << endl;
    cout << "name" << "\t" << "sex" << "\t" << "age" << "\t" << "tele" << "\t" << "home" << endl;
    for (int i = 0; i < 1000;i++){
        if ( !(adb_p -> empty)) output(adb_p);
        else  break;
        adb_p++;

    }

    cout << "\t--------end--------\t\n" << endl;
}

void add(person address_book[], person new_){
    person* adb_p = address_book;
    cout << "用户" << new_.name << "准备录入" << endl;
    new_.empty = 0;
    for (int i = 0; i < 1000;i++){
        if (adb_p -> empty){
            *adb_p = new_;
            cout << "用户" << new_.name << "已录入" << "(" << i+1 << "/1000)\n" << endl;
            break;
        }
        else if (i==999){
            cout << "通讯录已满(1000/1000)\n" << endl;
            break;
        }
        adb_p++;
    }
}

void del(person address_book[], string name){
    person* adb_p = address_book;
    cout << "用户" << name << "删除中" << endl;
    int goal_n = search(address_book, name);
    if (goal_n){
        person c = {"","","","","",1};
        int end = to_end(address_book);
        adb_p[goal_n-1] = adb_p[end];
        adb_p[end] = c;
        cout << "用户" << name << "已删除" << "(" << goal_n << "/1000)\n" << endl;
    }
    else cout << "用户" << name << "删除失败\n" << endl;
}


int search(person address_book[], string name){
    person* adb_p = address_book;
    cout << "用户" << name << "查找中" <<endl;
    for (int i = 0; i < 1000;i++){
        if (adb_p -> name == name){
            const person* goal = adb_p;
            cout << "用户" << name<< "已找到："<< endl; 
            output(goal);
            cout << endl;
            return i+1;
        }
        else if (adb_p ->empty || i==999){
            cout << "用户" << name << "查找失败" << "(" << i+1 << "/" << i+1  << ")\n" << endl;
            return 0;
        }
        adb_p++;
    }
    return 0x00;

}


int to_end(person address_book[]){
    person* adb_p = address_book;
    for (int i = 0; i < 1000;i++){
        if ( (adb_p -> empty)) return i-1;
        else if (i==999) return 0;
        adb_p++;

    }
    return 0x00;
}

void revise_key_value(person address_book[], string name, int key, string value ){
    cout << "用户" << name << "的" << key <<"准备修改为"<< value << endl;
    int goal = search(address_book,name) - 1; 
    person* adb_p = address_book;
    string key_;
    switch (key){
        case 0: adb_p[goal].name = value; key_="name";break;
        case 1: adb_p[goal].sex = value; key_="sex";break;
        case 2: adb_p[goal].age = value; key_="age";break;
        case 3: adb_p[goal].tele = value; key_="telephone";break;
        case 4: adb_p[goal].home = value; key_="home";break;
    }
    cout << "用户" << name << "的" << key_ <<"修改为"<< value << "成功" << "(" << goal+1 << "/" << goal+1  << ")\n" << endl;
    //output(adb_p);
}

void revise_person(person address_book[], string name, person revise){
    cout << "用户" << name << "准备修改为"<< revise.name << endl;
    int goal = search(address_book,name) - 1;
    person* adb_p = address_book;
    revise.empty = 0;
    adb_p[goal] = revise;
    cout << adb_p -> name << endl;
    cout << "用户" << name << "已修改为"<< revise.name << "(" << goal+1 << "/" << goal+1  << ")\n" << endl;
}

void clear(person address_book[]){
    cout << "清空表格中" << endl;
    person* adb_p = address_book;
    person c = {"","","","","",1};
    for (int i = 0; i < 1000; i++){
        if (adb_p -> empty) break;
        *adb_p = c;
        adb_p++;
    }
    cout << "表格已清空" << endl;
}