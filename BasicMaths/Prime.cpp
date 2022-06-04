#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter the number"<<endl;
cin>>n;

if(n<=1){
    return false;
}

int i=2;
bool isPrime = true;
for(int i=2;i<n;i++){

        if(n%2==0){
            
            isPrime==false;
        
        }
}
if(isPrime==true){
    cout<<"Prime number";
}
else{
    cout<<"Not Prime Number";

}
    return 0;
}
