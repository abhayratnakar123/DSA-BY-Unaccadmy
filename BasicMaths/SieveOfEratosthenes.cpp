//https://leetcode.com/problems/count-primes/

#include<iostream>
#include<vector>
using namespace std;

int SoE(int n){

vector<bool>prime(n+1 , true);
//0 or 1 prime no. nhi hai
int cnt = 0;
prime[0] == prime[1] == false;

for(int i=2; i<n ; i++){

if(prime[i]== true){
cnt++;
}
// for table 
for(int j= 2*i; j<n; j= j+i){

   prime[j] = false;
}
if(prime[i]==true)
cnt++;

}
return cnt;
//cout<<i;

}

int main(){

int n;
cout<<"Enter the Number"<<endl;
cin>>n;

cout<<SoE(n);
    return 0;
}