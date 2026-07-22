#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <cmath>
void arr_cout(int arr[], int len );
void bubble_sort(int* arr, int len);

int main(){
    
    //system("pause");

    //3 pig 
    /*
    int a,b,c;
    cout << "please input the weight of 3 pigs separately" << endl;
    cout << "A:" << endl;
    cin >> a;
    cout << "B:" << endl;
    cin >> b;
    cout << "C:" << endl;
    cin >> c;
    if (a>b){
        if (c>a){
            cout << "c>a>b" << endl;
        }
        else if (c>b){
            cout << "a>c>b" << endl;
        }
        else {
            cout << "a>b>c" << endl;
        }

    }
    else{
        if (c>b){
            cout << "c>b>a" << endl;
        }
        else if (c>a){
            cout << "b>c>a" << endl;
        }
        else{
            cout << "b>a>c" << endl;
        }
    }*/

    //guess number
    /*
    int a;
    srand((unsigned int)time(0));
    int b = rand()%100 +1;
    cout << "猜数字" << endl;
    cin >> a;
    while (a!=b){
        //cout << b << endl;
        (a>b ? cout <<  "猜大了，再猜一次" << endl : cout <<  "猜小了，再猜一次" << endl);
        cin >> a;
    }
    cout << "恭喜，猜对了" << endl;
    */

    // 水仙花数
    /*
    int a = 100;
    int handred, decade, unit;
    do {
        
        handred = a / 100;
        decade = a / 10 % 10;
        unit = a % 10;
        if (pow(handred, 3) + pow(decade, 3) + pow(unit,3) == a ){
            cout << (pow(handred, 3) + pow(decade, 3) + pow(unit,3) ) <<endl;
            cout << handred << decade << unit<< endl;
            cout << a << "为水仙花数" << endl;
        }
        
        a++;
        

    }while ( a < 1000);
    */
    
    //knock table
    /*
    a = 1~100
    if  unit = 7 or decade = 7 or a // 7 = 0 
        print 敲桌子
    else 
        print a
    */
   /*
    for (int i=1; i<=100; i++){
        ( (i % 7 == 0 || i % 10 == 7 || i / 10  == 7 ) 
            ? cout << "敲桌子" << endl 
            : cout << i << endl );
    }
    */
   //二维图
   /*
   for (int i=  0; i <= 10086; i++){
    
    for (int i = 0; i<=9; i++){
        cout << "*\t" ;
    }
    cout << "\n" << endl;
   }
    */
   //乘法表
   /*
   for (int i = 1; i<=9; i++){
    for (int j = 1; j<=i; j++){
        cout << j << "X" << i << "=" << i*j << "\t";
    }
    cout << endl;
   }*/

   //5 pig weight 
   /*
    int pigs[5] = {300, 350, 300, 400, 250};

    int max = pigs[0];
    int min;
    int order = 0;
    int orders[5] ={0};
    bool used[5] ={false};
    for (int i = 0; i<=4; i++){
        order = 0;
        for (int j = 0; j<=4; j++){

            if (pigs[i] > pigs[j]){
                order += 1;
            }
            
        }
        
        FLAG:
        if (used[order]){
            order += 1;
            
        goto FLAG;
        } 
        orders[order] = pigs[i];
        used[order] = true;
        
        //cout << big << endl;
    }
    
    
    for (int i = 0; i<=4; i++){
        cout << orders[i] << "\t";
    }
    */

    //元素逆置
    /*
    int nums[5] ={1,3,2,5,4};
    int temp;
    int length = sizeof(nums)/sizeof(nums[0]);
    if (length%2 == 0){
        length /= 2;
    }
    else{
        length /=2 +1;
    }
    for (int i =0; i<=length; i++){
        int j = 4-i;
        temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }
    for (int i = 0; i<=4; i++){
        cout << nums[i] << "\t";
    }
        */
    
    //冒泡排序
    /*
    int nums[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int length = sizeof(nums)/sizeof(nums[0]);
    int temp;
    int max = nums[0];
    bool flag = true;
    for (int j=length-1; j>=0; j--){
        for (int i = 0; i <= j-2; i++){
        if (nums[i] >= nums[i+1]){
            temp = nums[i+1];
            nums[i+1] = nums[i];
            nums[i] =temp;
        }
        
    }
    }
    for (int i = 0; i < 9; i++ ){
        cout << nums[i] << "\t";
    }
        */
    
    //考试成绩统计
    /*
    int scores[3][4] = 
    {
        {3,100, 100, 100},
        {4,90, 50, 100},
        {5,60, 70, 80}
    };
    string names[3] = {"张三", "李四", "王五"};
    for (int i = 0; i <= 2; i++){
        int score = 0;
        for (int j = 1; j <= 3; j++){
            score += scores[i][j];
        }
        cout << names[i] << "成绩：" << score << endl;
    }*/

    int arr[] = {5,3,2,4,1,6,3,7};
    arr_cout(arr, 9);
    bubble_sort(arr, 9);
    arr_cout(arr, 9);


    return 0;
}

void arr_cout(int arr[], int len){
 
    for (int i = 0; i <= len-1; i++){
        cout << arr[i] << '\t';
    }
    cout << endl;
}

//冒泡排序 - 数组、函数的指针运用

void bubble_sort(int* arr, int len){
    int* start = arr;
    for (int i = len-1; i >= 0; i--){
        arr = start;
        bool swrapped = false;
        for (int j = 0; j <= i-1; j++){
            int front = *arr;
            arr++;
            int next = *arr;
            //cout << front << "\t" << next << endl;
            //cout << j << endl;
            if (next <= front){
                *arr = front;
                arr--;
                *arr = next;
                arr++;
                swrapped = true;
            }
        
        }
        if (! swrapped) break;
    }
}

void bubble_sort01(int* arr, int len){
    for (int i = len-1; i >= 0; i--){
        for (int j = 0; j <= i-1; j++){
            if (arr[j] >= arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//不用在函数里建变量，可以省点内存，01更好些