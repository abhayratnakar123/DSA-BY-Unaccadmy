#include<iostream>
using namespace std;

int  PrintCount(int n){
if(n==-1){
   
   return 0;
}
cout<<n<<" ";
PrintCount(n-1);

}

int main(){

int n;
cout<<"Enter the value"<<endl;
cin>>n;
PrintCount(n);

    return 0;
}