#include<iostream>
using namespace std;

int main(){
int *ptr = 0;
int n =5;
int *p = &n;
// print the pointer value
cout<<*p<<endl;

// pointer ka address--
cout<<&n;

cout<<*ptr;
    return 0;
}