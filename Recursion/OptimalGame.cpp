//https://www.geeksforgeeks.org/optimal-strategy-for-a-game-dp-31/
#include<iostream>
using namespace std;

 int OptimalGame(int arr[], int i, int j){

if(i>j){
    return 0;
}

int choice1 =  arr[i] + min(OptimalGame(arr,i+2,j) ,
                                   OptimalGame(arr,i+1,j-1));

int choice2 = arr[j]+ min(OptimalGame(arr,i+1,j-1),
                            OptimalGame(arr,i,j-2));


return max(choice1,choice2);


 }
int main(){

int arr[] = {20,30,2,2,2,10};
int i=0;
int j=5;


cout<<"Ans is"<<" "<<OptimalGame(arr,0,5);
    return 0;
}