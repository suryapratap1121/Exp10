#include <iostream>
using namespace std;
void swap(int &x ){
    int aa = 45;
  x=x+aa;
 
 
cout << "value incremented in function  "<< x<<endl;
}
int main(){
 int a=3;
 cout << "original value  "<< a <<endl;
 swap(a);
}
