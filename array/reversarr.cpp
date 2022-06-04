#include<iostream>
#include<limits.h>
using namespace std;

//revers arr -
void reversArr(int arr[] ,int n ){
int i = 0;
int j =n-1;

while (i<j)
{
    /* code */
    swap(arr[i],arr[j]);
    cout<<"hi";
    i++;
    j--;
}

}
// max valu in arr 

int getMax(int arr[],int n){
    int ans = INT_MIN;

    for(int i=0;i<n;i++){
           
           ans = max(arr[i]);

}

// swap alternate
void swapAlter(int arr[], int n){
int i=0;

 while(i<n){
     
  if(i+1<n){
      
  swap(arr[i],arr[i+1]);
 
  }
  i=i+2;
 }
    
}

// sort 0,1,2;
sort(int arr[], int n){
    
    int one =0; zero =0 , two = 0;
    for(int i=0; i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
        if(arr[i]==2){
            two++;
        }
    }
    
}

// check palindrom

bool Checkpalindrom(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
            return true;
            
        }
        else{
            
            return false;
        }
    }
}


// find DUBLICATE 

int  findDublicate(int arr[], int n){
    
    int sum1=0;
    for(int i=0;i<n;i++){
        
        sum1 = sum1+arr[i];
        
            }
    int sun2 = n*(n-1)/2;
    
    int ans = sum1 - sun2;
    
    return ans;
}
// kidins algorithum








int main()
{
    int arr[]={1,2,3,4,5,6,7,6};
    
    cout<<"Repeting number is "<<findDublicate(arr,8);

    return 0;
}
