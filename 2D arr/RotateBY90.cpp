#include <iostream>

using namespace std;

int Transpose( int arr[3][3], int row , int col)
{
    
    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            
            swap(arr[i][j], arr[j]arr[i]);
        }
    }
    
    
}
// REVERS KA FUNCTION LIKHNA HHAI
