// Maximum Number of People Defeated



class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int l=1;
        long long r=100000;
        int ans=1;
        while(l<=r){
            long long mid = l+(r-l)/2;
            long long st=mid*(mid+1)*(2*mid+1)/6;
            if(st <= p){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};
