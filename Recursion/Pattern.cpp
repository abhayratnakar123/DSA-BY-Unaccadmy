#include<iostream>
using namespace std;

void Pattern( int r , int c){

if(r==0)
    return;
if(c<r){
    cout<<"*";
    Pattern(r,c+1);
}
else{
cout<<endl;
Pattern(r-1,0);
}
} 

int main(){

Pattern(4,0);

}