#include <iostream>
using namespace std;

int MaxColSum(int arr[3][3] , int row, int col){
    
  
    for(int i=0;i<col;i++){
        
          int sum = 0;
          
        for(int j=0;j<row;j++){
            
         sum = sum + arr[j]arr[i];
            
        }
    }
    return sum;
}



int main()
{
    int arr[3][3] = {
        
        {1,2},{2,3},{4,5},
        {1,2},{2,3},{4,5},
        {1,2},{2,3},{4,5},
    };
    cout<<MaxColSum(arr,3,3);

    return 0;
}
