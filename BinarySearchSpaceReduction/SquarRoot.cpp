//https://www.youtube.com/watch?v=6z2HK4o8qcU&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=14
//https://www.geeksforgeeks.org/find-square-root-number-upto-given-precision-using-binary-search/
// use long long int because integer is over flow--
#include<bits/stdc++.h>
using namespace std;

long long int SquarRoot(int n){

int start = 0;
int end = n;
int ans =-1;

 long long int mid =  start+(end - start)/2;

while (start<=end)
{
    long long int squar = mid*mid;

 if(squar == n){

     return mid;
 }
 if(squar < n){

     ans = mid;

     start = mid+1;

 }
  if(squar > n){

     end = mid-1;
 }

mid = start +(end-start)/2;
} 
return ans;
}


int main(){

cout<<"Squar Root is"<<" "<<SquarRoot(49)<<endl;
    return 0;
}