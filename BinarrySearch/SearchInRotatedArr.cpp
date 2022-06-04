// pivot is the minimum and maximum  value in an array 
#include<iostream>
using namespace std;

int FindPivot(int arr[], int n){

int start = 0;
int end = n-1;
 int mid  = start+(end-start)/2;

 while(start<end){

 if(arr[mid]>= arr[0]){
     
     start = mid+1;

 }
else{

end = mid;

}
 mid  = start+(end-start)/2;

}
return start;

}
int binarySearch(int arr[] , int n , int target, int pivot ){

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
int FindPosition(int arr[], int n , int target){
int pivot = FindPivot(arr,n); 
    
    if(target>= arr[pivot]&& target<= arr[n-1]){

        return binarySearch(arr,pivot,n-1,target);
}
else{

   return binarySearch(arr,0,pivot-1,target);

}
} 
int main(){

int arr[7]={4,5,6,7,0,1,2};
int target = 0;
cout<<"Find Position"<<" "<<FindPosition(arr,7,target);

    return 0;
}