//A,a=0,B,b=1......Z,z=25 ;
#include<iostream>
#include<cstring>
using namespace std;

char getMaxOCC(string s){

int arr[26] ={0};

//create array count 
for(int i=0; i<s.length();i++){
    char ch = s[i];
    // for lower case
    int number = 0;
    
    if(ch>='a' && ch <= 'z'){
       number =  ch -'a';
    }
    //Uppercase
    else{
        number = ch -'A';
    }
    arr[number]++;
}

int maxi = -1;
int ans = 0;
for(int i=0 ; i<26;i++){
if(maxi < arr[i]){

    ans = i;
    maxi = arr[i];
}
}
char finalAns = 'a' + ans;
return finalAns; 
}

int main(){

string s;
cout<<"Enter the String"<<endl;
cin>>s;
cout<<"Maximun Char OCC is "<< " "<<getMaxOCC(s)<<endl;

    return 0;

}
