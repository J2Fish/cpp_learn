#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person{
  public:
  	string m_Name;
  	int m_Id;
};

void test01(){
  vector<vector <int>> v;
  vector<int> v1;
  vector<int> v2;
  vector<int> v3;

  for (int i = 0; i < 6; i++){
    v1.push_back(i);
    v2.push_back(i);
    v3.push_back(i);
  }
  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);

  for (vector<vector<int>>::iterator i = v.begin(); i != v.end(); i++){
    for (vector<int>::iterator i1 = (*i).begin(); i1 != (*i).end(); i1++){
      cout << *i1 << "\t";
    }
    cout << endl;
  }
}
int main(){
  
  string str = string(21,'s');
  cout << str << endl;
  str = string(21,'s');
  cout << str <<endl;
  char chars[5] = {'2', '3', '4', '5', '6'};
  str.assign(chars, 3); // 前n个char
  cout << str << endl;
  str.assign(2, 's'); // n个char
  cout << str << endl;
  return 0; 
}