#include<iostream>
using namespace std;

void Sort( int arr[],int r , int c){
if(r==0)
    return;
if(c<r){
    
     if(arr[c]>arr[c+1]){

     swap(arr[c],arr[c+1]);
     }

     Sort(arr,r,c+1);
}
else{
         Sort(arr,r-1,0);

}

} 
void print (int arr[], int r, int c ){

for(int i=0; i<4;i++){
    cout<<arr[i]<<" ";
}
}


int main(){

int arr[4] = {4,3,2,1};
Sort(arr,4-1,0);
print(arr,4-1,0);
    return 0;

}