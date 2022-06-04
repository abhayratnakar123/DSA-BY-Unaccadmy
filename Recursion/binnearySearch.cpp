#include<iostream>
using namespace std;

int search(int arr[], int target,int s = 0,int e = 5-1)
{
//not found
if(s<e){

    return -1;
}
int mid = s + (e-s) / 2;

// found
if(arr[mid]==target){

    return mid;

}
if(arr[mid]< target){

    return search(arr,mid+1,e,target);
}
else{

return search(arr,s,mid-1,target);

}

}
int main(){


int arr[5] = {1,2,3,4,5};
int target = 4;

cout<<search(arr,5,5);

    return 0;
}