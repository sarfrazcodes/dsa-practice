class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long int rev=0;
        while(temp>0){
            int rem = temp%10;
            rev = rev*10 + rem;
            temp /= 10;
        }
        int ans = (x==rev)? 1: 0;
        return ans;
    }
};