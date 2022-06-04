#include<iostream>
using namespace std;

int getlenght(char arr[]){

int lenght = 0;
int index = 0;

while (arr[index] != '/0')
{
    /* code */
index++;
lenght++;

}
return lenght;
}


int main(){

//crestion
char arr[name];
char name = "abhay";

// input
//cin >> name;

//output
cout<<getlenght(name)<<endl;

    return 0;
}