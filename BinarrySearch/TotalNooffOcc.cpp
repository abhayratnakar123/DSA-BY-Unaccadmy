#include<bits/stdc++.h>
using namespace std;
// last occurence --
int LastOcc(int arr[] , int n , int target){
int start = 0;
int end = n-1;
int ans1 = -1;
int mid =  start + (end - start) / 2;
while (start<=end)
{
 if(arr[mid] == target){

     ans1 = mid;
     start = mid+1;
 }
 if(arr[mid] < target){

     start = mid+1;

 }
  if(arr[mid] > target){

     end = mid-1;
 }

mid = (start + end)/2;
} 
return ans1;
}
int FirstOcc(int arr[] , int n , int target){
int start = 0;
int end = n-1;
int ans2 = -1;
int mid =  start + (end - start) / 2;
while (start<=end)
{
 if(arr[mid] == target){

     ans2 = mid;
     end = mid-1;
 }
 if(arr[mid] < target){

     start = mid+1;

 }
  if(arr[mid] > target){

     end = mid-1;
 }

mid = (start + end)/2;
} 
return ans2;
}
int TotalNo(int arr[] , int n, int target , int ans1 ,int ans2){
    
TotalNo = ans1+ans2+1;

}
int main(){

 int arr [] = {2,3,5,5,5,5,12};
 int n = 8;
 int target = 5;
  cout<< " total no. of occurance"<<TotalNo
 cout << "first index found at "<<FirstOcc(arr,n,target)<<endl;
 cout << "Last index found at "<<LastOcc(arr,n,target)<<endl;

 return 0;
}