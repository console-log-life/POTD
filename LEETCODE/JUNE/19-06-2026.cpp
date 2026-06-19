// 1732. Find the Highest Altitude


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int curr= 0;
        int maxal=0;

        for(int i=0;i<n;i++){
            curr += gain[i];
            maxal = max(maxal, curr);
        }
        return maxal;
    }
};
