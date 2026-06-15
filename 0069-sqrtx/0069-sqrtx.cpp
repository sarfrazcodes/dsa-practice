class Solution {
public:
   int mySqrt(int x) {
    if(x==0 || x==1) return x;
    int low = 0, high = x,ans =0;
    while(low<=high){
        long long int mid = low + (high-low)/2;
        if(mid*mid==x){
            return mid;
        }
        if(mid*mid > x){
            high = mid -1;
        }
        if(mid*mid < x){
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}
};