class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int cnt=0;
        int i=0;
        while(coins>0 && i<n){
            if(costs[i] > coins){
                i++;
                continue;
            }
            else{
                coins -= costs[i];
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};
