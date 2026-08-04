#include <iostream>
using namespace std;
#include <string>
//结构体嵌套
/*
struct Student {
    string name;
    int age;
    int score;
    };

struct Classes {
    int number;
    struct Student stu;

    };
    */
//函数声明
//void add(int a, int b);
//void stu_ifm(Student stu);
//void stu_ifm_p (Student* stu);
/*
void swap02(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap01(int p1, int p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
*/

//struct student;

// 结构体
/*
struct Student {
    string name;
    int age;
    int score;
    };
*/


// 结构体数组
/*
struct  Student
 {
    string name; 
    int age; 
    int score;
};
*/
/*
int g_a = 10; 
const int c_g_a = 10;
*/



int* func();
void swap(int &a, int &b);
















int main()
{   
    //变量创建 数据类型 名称 = 初始值
    /*
    int a = 0;

    cout << "number =" << a <<endl;
    */
    // 单行注释
    /*
    多行注释
    */
    
    // 常量定义
    // #define 宏常量 一般置于文件首
    //#define Day 7
    // const 修饰的变量
    /*
    const int Week = 7;
    cout << "一周" << Week << "天" <<endl;
    */

    //

    //system("pause");
    /*
    long long  a = 33;
    cout << sizeof(a) <<endl ;
    */
    
    /*
    float f1 = 3.14f;
    double d1 = 3.14159265358979323846264338327950;
    cout << d1 << endl;
    cout << sizeof(double) << endl;
    float f2 = 3e-19;
    cout << f2 << endl;
    */

    //char ch = 'a';
    //char str[] = "hello world";

    /*
    string str  = "sdf";//= "hello world";
    str = "ste";
    cout << str << endl;
    */

    /*
    bool b = true;
    bool a= "sdaf";
    cout << a << endl;
    cin >> a;
    cout << a << endl;
    */

    // if语句
    /*
    if (1==2){
        cout << "1=2" << endl;

    }
    else if (1==3){
        cout << "1=3" << endl
    }
    else {
        cout << "1!=2" << endl;
    }
        */

    // 三目
    /*
    int a;
    int b;
    a = 5;
    b = 6;
    (a>b ? a:++b) += 10;
    cout << a << "\n" << b << endl;
    */
    
    //switch
    /*
    int a;
    cin >> a;
    switch (a){
        case 1:
            cout << int(1) << endl;
            break;
        case 2:
            cout << int(2) << endl;
            break;
        default:
            cout << a << endl;
            break;
    }
            */

    //while
    /*
    int a = 0;
    while (a<=9){
        cout << a++ << endl;
        

    }
        */
    // do while 
    /*
    int a =0 ;
    do {
        cout << a++ << endl;
    } 
    while (a<=9);
    */
    //for

    /*
   for (int i=0; i<=9; i++){
    cout << i << endl;
   } 
    */
    
    //goto 
    /*
    for (int i = 0; i<=9; i++){
        cout << i << endl;
        for (; i<=19; i++){
            cout << i << endl;
            goto FLAG;
        }
        
    }
    FLAG:
    cout << "jkjk" << endl;
    */

    // 一维数组
    /*
    int arr[] = {10, 20, 30};
    for (int i = 0; i<5; i++){
        //cout << arr[i] <<endl;
        //cout << sizeof(arr)/sizeof(arr[0]) << endl;
        //cout <<  << endl;
        cout <<  (long long)arr << endl;
        cout << (long long)&arr[0] << endl;
        cout << (long long)&arr[1] << endl;
    }
        */

    //二维数组
    /*
    int arr [5][5] = 
    {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}

    };
    for (int i = 0; i <= 4; i++){
        for (int j = 0; j <= 4; j++){
            cout << arr[i][j] << "\t";
        }
        cout << "\n\v";
    }
    cout << sizeof(arr) << endl;

    */

    // 函数调用
    
    //add(2,3);
    //cout << a << endl;
    
    //指针
    //int a = 10;
    //指针定义 类型 * 指针变量名
    //int * p;
    //让指针记录变量a的地址
    //p = &a;
    /*
    cout << "a的地址为" << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    */
    //解引用 可找到指针指向的内存中的 数据  *指针名
    /*
    cout << *p << endl;
    *p = 99;
    cout << *p << endl;
    cout << sizeof(*p) << endl;
    */
    //空指针
    /*
    int * j = NULL;
    cout << j << endl;
    cout << *j << endl;
    *j = 0;
    */
    //野指针
    //int * j = (int *)0x1100; 
    //cout << *j << endl;
    //cout << "ooo" << endl;


    //const 修饰指针 -> 常量指针
    //int a = 10;
    //int b = 10;
    //int * p = &a;
    //cout << *p << endl;
    //const int * p = &a;
    //被const 修饰的指针，指向（内存）可以改，但指向的值（内存的信息）不可以改 #const 修饰*p，不修饰p
    //p = &b; // 指向
    // *p = 20; // 指向的值
    // const 修饰常量 -> 指针常量
    //int * const p = &a;
    // 此时指针的指向不可以改，但指针指向的值可以改
    //*p = 1000;
    //p = &b; // 不可改
    //const 即修饰常量，又修饰指针 
    //const int * const p = &a;
    //两个都改不了
    //*p = 9;
    //p = &b;
    
    // 指针与数组
    /*
    int arr[10] = {0,1,2,3,4,5,6,9,8,9};
    cout << arr[0] << endl;
    int* p = arr;
    cout << *(p + 6) << endl;
    p++; //向后偏移 4字节->指针所指向的数据类型大小  指针的算术以指针所指向的数据类型大小为单位
    
    cout << p[0] << endl;
    cout << p[9] << endl;
    */
    //指针遍历数组
    /*
    for (int i = 0; i<=9; i++){
        cout << *p << '\t';
        p++;
    }
        */
    
    //指针与函数
    //1、值传递 
    /*
    int a = 0;
    int b = 1;
    swap01(a, b);
    cout << "a:" << a 
         << "\t"
         << "b:" << b 
         <<endl; //未交换
    */
    //2、地址传递 可通过指针改变实参的值
    /*
    swap02(&a, &b);
    cout << "a:" << a 
         << "\t"
         << "b:" << b 
         <<endl; //已交换
    */

    //结构体创建变量
    /*
    struct Student stu1;
    struct Student stu2 = {"Mace", 16, 666};
    cout << stu2.score << endl;
    */

    //结构体数组
    /*
    struct Student StuArr[5] = {
        {"Mace", 16, 666},
        {"leaves", 16, 444},
        {"pig", 33, 333}
    };
    */
    // 遍历
    /*
    for (int i = 0; i <= sizeof(StuArr)/sizeof(StuArr[0])-1; i++){
        cout << "name:" << StuArr[i].name << "\t"
             << "age:" << StuArr[i].age << "\t"
             << "score:" << StuArr[i].score << "\t" << endl;
    };
    */

    //结构体指针 "->"
    //指针指向结构体变量
    /*
    Student* p1 = StuArr;
    for (int i = 0; i <= sizeof(StuArr)/sizeof(StuArr[0])-1; i++){
        
        cout << "name:" << p1->name << "\t"
             << "age:" << p1->age << "\t"
             << "score:" << p1->score << "\t" << endl;
        p++;
    };
    */

    

    
    /*
    struct Student  stu1 = {
        "mace", 111, 666
    };
    
    struct Classes class1[2] = {
        {1, stu1.name, stu1.age, stu1.score}

    };
    */
    // 结构体作函数参数
    // 值传递
    /*
    stu_ifm(stu1);
    cout << "name:" << stu1.name << "\t"
         << "age:" << stu1.age << "\t"
         << "score:" << stu1.score << "\t" 
         << endl;
         */
    //地址传递
    /*
    Student* stu1_p = &stu1;
    stu_ifm_p(stu1_p);
    cout << "name:" << stu1.name << "\t"
         << "age:" << stu1.age << "\t"
         << "score:" << stu1.score << "\t" 
         << endl;
         */

    //全局区
    //全局变量->主函数外，静态变量，常量
    //普通的局部变量
    /*
    int a = 10;
    int b = 10;
    cout << "局部变量" << endl;
    cout << "&a = " << (long long)&a << endl;
    cout << "&b = " << (long long)&b << endl;
    cout << "全局变量" << endl;
    cout << "&g_a = " << (long long)&g_a << endl; 
    */
    //静态变量
    /*
    static int s_a = 10;
    cout << "静态变量" << endl;
    cout << "&s_a = "  << (long long)&s_a<< endl; 
    */
    //常量 - 分为字符串常量和全局常量，局部常量 
    /*
    cout << "字符串常量" << endl;
    cout << "&'sdafsadf' = "  << (long long)&"sdafsadf" << endl;
    */
    //全局常量-const修饰的全局变量，局部常量则是const修饰的局部变量
    /*
    const int c_a = 10;
    cout << "局部常量" << endl;
    cout << "&c_a = " << (long long)&c_a << endl;
    cout << "全局常量" << endl;
    cout << "&c_g_a = " << (long long)&c_g_a << endl;
    cout << "由此可知，全局变量，静态变量，常量(不含局部常量)在内存中位于同一区域（全局区） const仅表示“只读”，与内存区无关" << endl;
    */
    //在堆区开辟内存
    /*
    int* p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
    */
    //system("pause");


    // 引用
    /*
    int a = 10;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    b = 30;
    cout << &a << endl;
    cout << &b << endl;
    */
    /*
    int a = 10;
    int b = 20;
    swap (a, b);
    cout << a << "\t" << b << endl;
    */
    
    //swap()
    cout << "new life" << endl;














    return 0;
}
int* func(){
   static int* p = new int(10);
   return p;
}


//函数定义
/*
void add(int a, int b)
{
    int sub = a + b;
    cout << sub << endl;
}
    */

/*
void stu_ifm(Student stu){
    stu.name = "mace1";
    cout << "name:" << stu.name << "\t"
         << "age:" << stu.age << "\t"
         << "score:" << stu.score << "\t" 
         << endl;
}

void stu_ifm_p(Student* stu){
    stu->name = "mace2";
    cout << "name:" << stu->name << "\t"
         << "age:" << stu->age << "\t"
         << "score:" << stu->score << "\t" 
         << endl;
}
         */

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
     
}

