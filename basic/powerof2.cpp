//https://leetcode.com/problems/power-of-two/

//formula n & (n-1) == 0  so it is write it as 2^n;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0){
            return false;
        }
            
            int ans = n & (n-1);
            return (ans==0);
        }
// second approch -- 
// power of 4--
// bool isPowerOfFour(int n) {
// if(n==0){return false;}
// if(n==1){return true;}
// int r = n%4;
// if(r!=0){return false;}
// n=n/4;
// return isPowerOfFour(n);
// }

   if(n<0){
       return 0;
   }
       int cnt = 0;
       while(n!=0){
// check bit 

if(n&1){
    cnt++;
}

//remove bit 

n=n>>1;

if(cnt ==1){
    return true;
}
return false;

       }
   }


        
};