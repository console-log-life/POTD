// Minimum Insert and Delete to Convert



class Solution {
  public:
  int Lis( vector<int>&t){
      if(t.empty())return 0;
      vector<int>dp;
      for(int x:t){
          auto it=lower_bound(dp.begin(), dp.end(), x);
          if(it==dp.end())dp.push_back(x);
          else
          *it=x;
      }
      return dp.size();

  }
    int minInsAndDel(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        int m=b.size();
        unordered_map<int,int>mp;
        for(int i=0; i<m; i++)mp[b[i]]=i;
        
        vector<int>t;
        for(int x:a){
            if(mp.find(x)!=mp.end())
            t.push_back(mp[x]);
        }
        
        return n+m-2*Lis(t);
    }
};
