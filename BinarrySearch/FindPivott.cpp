//https://leetcode.com/problems/search-in-rotated-sorted-array/
//1. find piivot 
//2. check condition arr[pivot]<=target <= arr[n-1];
// 3. apply BS in First or Second Line
#include<iostream>
using namespace std;

int pivot(int arr[], int n){

int start = 0;
int end = n-1;
 int mid  = start+(end-start)/2;

 while(start<end){

// mid ko uske piche or agye wale element se compair kra liya--

 if(arr[mid]>arr[mid+1]){
     
     return mid;
 }
 if(arr[mid]<arr[mid-1]){
     
     return mid-1;

 }
 // aap do chije bachi hai 
 if(arr[start]>=arr[mid]){
     // left bhag jaoo
     end = mid-1;
 }
 else{
     start = mid+1;
 }

mid  = start+(end-start)/2;

}
return -1;
}
int main (){

int arr[7]={3,4,5,6,7,1,2};

cout<< "Pivot index is" <<" "<< pivot(arr,7) <<endl;

    return 0;
}