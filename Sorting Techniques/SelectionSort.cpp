#include <iostream>
using namespace std;
void Selection(int arr[] ,int n){
for(int i=0 ; i<n-1 ; i++){
    int Min = i;
    
    for(int j= i+1; j<n ; j++){
        if(arr[Min] > arr[j]){
        Min = j;
        }
        swap(arr[i],arr[Min]);
}
}
}
void print(int arr[], int n){
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
        
    }
}

int main()
{

int n = 5;
int arr[] = {5,4,3,2,1};

Selection(arr,n);
cout<<"Sorted Array "<<endl;
print(arr,n);

    return 0;
}