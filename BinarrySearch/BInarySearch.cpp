#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int n , int target){

int start = 0;
int end = n-1;

 int mid =  start+(end - start)/2;

while (start<=end)
{
 if(arr[mid] == target){

     return mid;
 }
 if(arr[mid] < target){

     start = mid+1;

 }
  if(arr[mid] > target){

     end = mid-1;
 }

mid = (start + end)/2;
} 
return -1;
}


int main(){

 int arr [] = {2,4,6,8,9,11,23};
 int n = 7;
 int target = 2333;

// cout<< binary_search(arr,n,target);

  if(binarySearch(arr,n,target)){
      cout<<"Element Found at Index "<<" "<<binarySearch(arr,n,target)<<endl;
  }
else{

    cout<<" Element not Found"<< endl;
}
    return 0;
}