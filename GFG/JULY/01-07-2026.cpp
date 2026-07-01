// Max Subarray Sum by Removing At Most One



class Solution {
  public:
    int maxSumSubarray(vector<int>& arr) {
        int kep = arr[0];

        int del = 0;

        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            del = max(kep, del + arr[i]);

            kep = max(arr[i], kep + arr[i]);

            ans = max(ans, max(kep, del));
        }

        return ans;
    }
};
