#include <iostream>

using namespace std;

int lenar(int arr[], int n ,int k){
    
for(int i=0; i<n;i++)
if(arr[i]==k) return i;
 return -1;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int k =5;
    int ans = lenar(arr,6,k);
    if(ans == -1){
        cout<<" element is not present "<<endl;
        
    }
    else{
        
        cout<<"element is present at index"<<" "<<ans;
    }
    return 0;
}
