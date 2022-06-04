#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,5};
int*p = arr;
// Integer arr ke case me address print hota hai

cout<<"*P -"<< *p << endl;

// yaha prr ak ENTIER CONTENT PRINT HO JATA HAI WHY?

char ch[5] = "amcd";

// cout KI IMPLEMENTATION ESSI HI LIKHHI GYI HAI

char *ptr = ch;
cout<< ptr<<endl;

char carac = 'N';

char *ctr = &carac;
cout<<ctr<<endl; 

}
