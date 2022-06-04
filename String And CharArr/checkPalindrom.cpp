#include<iostream>
#include<cstring>
using  namespace std;

void checkPalindrom(char arr[]){

int n = strlen(arr);

int s = 0;
int e = n-1;

if(arr[s]==arr[e]){

cout<<"It's a palindrom";
}
else{
cout<<"Not a palindrom";
}
s++;
e--;
}

int main(){

char arr[] ="anna";

checkPalindrom(arr);

    return 0;
}