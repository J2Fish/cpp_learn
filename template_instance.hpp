#include <iostream>
using namespace std;

// 声明
template <class T1>
class MyArray{
    public:
        T1** Num_array = nullptr;
        T1& operator[] (int index);
        void pop();
        void append(T1& element);
        MyArray(int len);
        int count();
        void operator=(MyArray& array);
        int get_len();
        int get_count();
    private:
        int len;
        int count_;

};

// ================

template <class T1>
MyArray<T1>::MyArray(int len){
    this -> Num_array = new T1* [len];
    this -> len = len;
    this -> count_ = 0;
    for (int i = 0; i < len; i++) {
    this->Num_array[i] = nullptr;
    }
    cout << "长度为" << len << "的数组已建立" << endl;
}

template <class T1>
int MyArray<T1>::count(){
    for (int i = 0; i < len; i++){
        if ((this -> Num_array)[i] == nullptr){
            this -> count_ = i;
            break;
        }
        if (i == len - 1){
            this -> count_ = len;
        }
    }
    return this -> count_;
}

template <class T1> 
void MyArray<T1>::append(T1& element){
    (this -> Num_array)[count_] = new T1 (element);
    (this -> count_)++;
}

template <class T1>
void MyArray<T1>::pop(){
    delete (this -> Num_array)[count_ - 1];
    (this -> Num_array)[count_ - 1] = nullptr;
    (this -> count_)--;
}

template <class T1>
void MyArray<T1>::operator=(MyArray& array){
    this->Num_array = array.Num_array;
    this->count_ = array.count_;
    this->len = array.len;
}

template <class T1>
T1& MyArray<T1>::operator[](int index){
    return *(this->Num_array)[index]; // 不解引用返回的是T1*
}


template <class T1>
int MyArray<T1>::get_len(){
    return this->len;
}

template <class T1>
int MyArray<T1>::get_count(){
    return this->count_;
}