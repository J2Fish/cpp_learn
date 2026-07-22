//毕设名单

#include <iostream>
#include <string>
using namespace std;


struct Student{
    string name;
    int score;
};


struct Teacher{
    string name;
    struct Student stu[5];
};





int out (const Teacher* tea);




int main() {
    struct Student stu1 = {
        "mace", 666

    };
    struct Student stu2 = {
        "mace1", 667

    };

    struct Teacher teas[3] = {
        {"tea1",{
            {stu1.name, stu1.score},
            {stu2.name, stu2.score}
        }},
        {"tea2",{
            {stu1.name, stu1.score},
            {stu2.name, stu2.score}
        }}

    };

    out(teas);





    return 0;
}




int  out(const Teacher* tea){
    //名单结构体的格式化输出
    cout << "TeaName\tStuName\tScore" <<endl;
    for (int i = 0; i <= 2; i++){
        cout << tea -> name;
        for  (int j = 0; j <= 4; j++){
            cout << "\t" << tea -> stu[j].name << "\t"
                 << tea -> stu[j].score << endl;

        }
        cout <<endl;
        tea ++;

    }

    return 0;
}