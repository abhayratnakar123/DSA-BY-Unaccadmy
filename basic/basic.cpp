/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    // Q 1 find digit 
// {
//  int n= 137;
//  while(n!=0){
//      int digit = n%10;
//      cout<<"digit"<<digit<<endl;
     
//      n=n/10;
//  }

// Q 2 - for decimal to binary finding bit --
// int n=6;
// while(n!=0){
//     //bit nikalo
//     int bit = n&1;
//     //print kro
//     cout<<bit;
//     // right shft so that last bit get lost-
//     n = n>>1;
// }

// Q3.Prime NO
int n;
cin>>n;
int i=2;
bool isPrime = true;
for(int i=2;i<n;i++){

        
        if(n%2==0){
            
            isPrime==false;
        
        }
}
if(isPrime==true){
    cout<<"prime number";
}
else{
    cout<<"notPrime";


    return 0;
}
