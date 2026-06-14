class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        long long int rev=0;
        int temp =x;
        while(temp!=0){
            int rem = temp %10;
            rev = rev * 10 + rem;
            temp/=10;
        }
        return rev==x;
    }
};