#include<iostream>
using namespace std;

int Serach(int arr[][3],int n,int m , int target )
{
int s=0;
int e=n-1;
int mid =  s+(e-s)/2;

while(s<=e){

//check starting ellemenr
if(arr[mid][0]== target){

cout<< mid << " " << 0 << endl;
    return true;

}
// check last element --
if(arr[mid][n-1]== target){

    return true;
    
}
// 

if(targrt > arr[mid][0]&& target < arr[mid])





}








}











int main(){

int arr[3][2] = {1,5,9,14,20,23,30,34,43};
int n = 3;
int m =3;
int target = 34;
cout<<Serach(arr,n,m,target);





}