#include<iostream>
#include<cstring>
using namespace std;

void revers(char arr[]){

int  n = strlen(arr);
int s=0;
int e=n-1;

while(s<e){

swap(arr[s],arr[e]);

s++;
e--;
}
}
int main(){

char arr[] = "abhay ratnakar";

revers(arr);

cout<<arr;

    return 0;

}