//https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
#include<iostream>
using namespace std;

int GCD(int a , int b){

if(a==0){

return b;

}

if(b==0){

return a;

}

while(a!=b){

if(a>b){
    a = a-b;
}
else{
    b=b-a;
}
}
return a;
}

int main(){

int a;
int b;

cout<<"Enter the first number"<<endl;
cin>>a;
cout<<"Enter the Second number "<<endl;
cin>>b;
cout<<"GCD is"<<" "<< GCD(a,b)<<endl;


}

