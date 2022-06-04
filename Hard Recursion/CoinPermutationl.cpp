//coin change problem -
//important question --
//https://www.geeksforgeeks.org/coin-change-dp-7/
#include<iostream>
using namespace std;

solvecoin(int coins [], int n, int amount, int currentcoin){

if(amount == 0){

    return 1;

}
if(amount < 0){

    return 0;
}
int ways = 0;

for(int i=currentcoin; i<n ; i++){

ways += solvecoin(coins,n, amount-coins[i],i);


}
return ways;
}

int main(){

int coins[] = {1,2};
int amount = 4;
int size =2;

int ans = solvecoin(coins,size,amount,0);
cout<<ans;

    return 0;

}