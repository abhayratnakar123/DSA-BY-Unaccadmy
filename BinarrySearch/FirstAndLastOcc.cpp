#include<bits/stdc++.h>
using namespace std;
// last occurence --
int LastOcc(int arr[] , int n , int target){
int start = 0;
int end = n-1;
int ans = -1;
int mid =  start + (end - start) / 2;
while (start<=end)
{
 if(arr[mid] == target){

     ans = mid;
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
return ans;
}
int FirstOcc(int arr[] , int n , int target){
int start = 0;
int end = n-1;
int ans = -1;
int mid =  start + (end - start) / 2;
while (start<=end)
{
 if(arr[mid] == target){

     ans = mid;
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
return ans;
}
int main(){

 int arr [] = {2,3,5,5,5,5,12};
 int n = 8;
 int target = 5;
 cout << "first index found at "<<FirstOcc(arr,n,target)<<endl;
 cout << "Last index found at "<<LastOcc(arr,n,target)<<endl;
 return 0;
}