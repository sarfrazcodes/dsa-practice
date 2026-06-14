class Solution {
public:
    bool isPalindrome(int x) {
        int rev =0;
        int temp = x;
        while(temp!=0){
            int rem = temp % 10;
            if(rev > INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rev = rev*10 +rem;
            temp /= 10;
        }
        int ans = (rev==x) ?  1 : 0;
        if(x<0) ans=0;
        return ans;
    }
};