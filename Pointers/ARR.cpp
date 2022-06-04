//IMPORTANT --
//https://stackoverflow.com/questions/8916656/why-is-arr-and-arr-the-same#:~:text=%26arr%20is%20an%20rvalue%20of,same%20result%20when%20printing%20them
#include<iostream>
using namespace std;

void dummy( int*arr , int n){

for(int i=0;i<n;i++)
cout<<i[arr]<<" ";

}

int main(){

int arr[5]={1,0,3,4,5};
cout<<"arr-"<<arr<<" "<<endl;
cout<<"*arr-"<<" "<<*arr<<endl;
cout<<"*(arr+1)-"<<" "<<*(arr+1)<<endl;
cout<<"*(arr+2)-"<<" "<<*(arr+2)<<endl;
int i = 0;
// both are same--
cout<<"arr[i]-"<<" "<<arr[i]<<endl;
cout<<"i[arr]-"<<" "<<i[arr]<<endl;
dummy(arr,5);

    return 0;

}