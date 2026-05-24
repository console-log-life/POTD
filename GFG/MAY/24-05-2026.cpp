// Last Coin in a Game of Alternates



class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        return *min_element(arr.begin(),arr.end());
    }
};
