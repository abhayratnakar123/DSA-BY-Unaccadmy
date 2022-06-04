#include<iostream>
using namespace std;

int factorial(int n){
//base case --
    if (n==1) {
        return 1 ;
    }
    int smallProblem = factorial (n-1);
// recursive call--
    int bigProblem = (n * smallProblem);
    return bigProblem;
}
int main(){

int n;

cout<<"enter the value"<<endl;
cin>>n;

cout<<"factorial is"<<" "<< factorial(n)<<endl;

    return 0;
}