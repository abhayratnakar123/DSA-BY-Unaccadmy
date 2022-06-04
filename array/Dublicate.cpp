#include <iostream>

using namespace std;

void Dublicate(int arr[], int n){
  
  for(int i=0;i<n ; i++){
     for(int j= i+1;j<n;j++){
         
         
         if(arr[i]==arr[j]){
        
        cout<< "dublicate number is "<< arr[i];
        
    } 
 }
    
}
}
int main()
{
    
    int arr[6] = {1,2,1,3,4,5};
    Dublicate(arr,6);

    return 0;
}
