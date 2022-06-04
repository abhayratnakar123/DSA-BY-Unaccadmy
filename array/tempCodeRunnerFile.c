#include <iostream>

using namespace std;

void revrse(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        
        swap(arr[i],arr[j]);
        
    }
}
void print(int arr[], int n){
for(int i=0;i<n;i++){
 cout<<arr[i];   
    
}
}




int main()
{
int arr[5] = {1,2,3,4,5}; 

revrse(arr,5);

    cout<<"Revers Array"<<print(arr,5);

    return 0;
}
