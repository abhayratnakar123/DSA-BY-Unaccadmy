#include <iostream>

using namespace std;

bool searchIN2Darr(int arr[3][3], int target , int row ,int col){

    for(int i=0;i<row;i++){
        // for each row
    for(int  j=0;j<col;j++){
        if(arr[i][j]== target){
            return true;
        }
    }
    return false;
    
}

int main(){
    int arr[3][3] = {
        
        {1,2}{2,3}{3,4}
        {1,2}{2,3}{3,4}
        {1,2}{2,3}{3,4}
        
    };
    cout<<searchIN2Darr(arr,13,4,2)<<endl;

    return 0;
}
