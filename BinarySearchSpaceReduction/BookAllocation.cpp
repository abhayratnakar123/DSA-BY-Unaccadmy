//https://www.codingninjas.com/codestudio/library/book-allocation-problem

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m, int mid){

int studentCount = 1;
int pageSum = 0;

for(int i=0;i<n;i++){

    if( pageSum+ arr[i] <= mid){

        pageSum+=arr[i];

    }
 else{

     studentCount++;
     
     if(studentCount> m || arr[i] > mid){

         return false;
     }
      
      pageSum = arr[i];

 }
}
return true;
}

int BookAlocation(int arr[] , int n , int m){

    int s=0;
    int sum =0;

    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
int e = sum;
int mid = s+(e-s)/2;
int ans = -1;

while(s<e){

if(isPossible(arr,n,m,mid)){
//left wala part 
    ans = mid;
    e = mid-1;

}
else{
    // right wala part 

    s = mid+1;
}
mid = s+(e-s)/2;

}
return ans;
}

int main(){

int arr[]={}



return 0;


}
