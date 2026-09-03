#include <iostream>
#include <string>
using namespace std;

template <typename T> T** select_sort(T* arr[], int len,int mode = 0){
    // 0升序，1降序
    T* temp = nullptr;
    T* extra = nullptr;
    int obj;
    for (int i = 0; i < len; i++){
        extra = arr[i];
        //cout << arr[i];
        for (int j = i+1; j < len; j++){
            if (mode == 0){
                if (*extra > *arr[j] ){
                    extra = arr[j];
                    obj = j;
                }
            }
            else if (mode == 1){
                if (*extra < *arr[j] ){
                    extra = arr[j];
                    obj = j;
                }
            }
        }
        if (extra != arr[i]){
            temp = arr[i];
            arr[i] = extra;
            arr[obj] = temp;
        }
    } 
    return arr;
}
void char_test(){
    char list1[10] = {'1', '2', '4', '8', '0', '7', '6', '5', '3', '9'}; 
    char* list[10] = {nullptr}; 
    for (int i = 0; i < 10; i++){
        list[i] = new char (list1[i]);
    }
    char** list_ = select_sort(list, 10, 1);
    for (int i = 0; i < 10; i++){
        cout << *list_[i] << "\t" ;
    }
}

int main(){
    char_test();
    return 0;
}