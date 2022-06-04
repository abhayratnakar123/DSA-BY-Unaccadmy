//Fixed point Wo hota hai jiska index or value same hooo ohhohoh  --
int FixedPoint(int arr[] , int n , int target){

int start = 0;
int end = n-1;
int ans = -1;

 int mid =  start + (end - start) / 2;

while (start<=end)
{
 if(arr[mid] == target){

     ans = mid;
     end = mid-1;
 }
 if(arr[mid] < target){

     start = mid+1;

 }
  if(arr[mid] > target){

     end = mid-1;
 }

mid = (start + end)/2;
} 
}