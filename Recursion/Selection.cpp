#include<iostream>
using namespace std;

void Sort( int arr[],int r , int c, int max){
if(r==0){
    return;
}
if(c<r){
    
     if(arr[c]>arr[max]){

     Sort(arr,r,c+1,c);
     }
     else{

     Sort(arr,r,c+1,max);
     }
     
     }
else {
             
      swap(arr[r-1],arr[max]);
      Sort(arr,r-1,0,0);
}
} 
void print (int arr[], int r, int c ,int max){

for(int i=0; i<4;i++){
    cout<<arr[i]<<" ";
}
}


int main(){

int arr[4] = {4,3,2,1};
Sort(arr,4-1,0,0);
print(arr,4-1,0,0);
    return 0;

}