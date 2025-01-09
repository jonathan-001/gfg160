// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/array-bonus-problems/problem/repetitive-addition-of-digits2221

// if single digit return  number
// else pass to fn 
// fn will compute digits of number
// till fn will

class Solution {
    // to find sum of digits
    int helper(int num){
        int sum = 0;
        while(num>0){
            sum += (num%10);
            num = (num/10);
        }
        return sum;
    }
  public:
    int singleDigit(int n) {
        // code here
        if(n<10) return n;
        int num = n;
        
        while(num > 9){
            num = helper(num);// return sum of digits
        }
        
        return num;
    }
};