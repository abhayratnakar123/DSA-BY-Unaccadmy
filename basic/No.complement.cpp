//https://leetcode.com/problems/number-complement/submissions/
//~ is use to convert 1 to 0 and 0 to 1 . 

class Solution {
public:
    int findComplement(int num) {
        int mask =0;
        // << left Shift
        //>> right Shift
        // | or & and 

        while(mask<num){
            mask = (mask<<1) | 1;
        }
        int ans =(~num)&mask;
        return ans;
        
        
    }
};