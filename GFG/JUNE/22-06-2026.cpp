// Maximum Area Between Bars


class Solution {
  public:
    int maxArea(vector<int> &height) {
        // code here
        int n=height.size();
        int i=0, j=n-1;
        int mxarea=0;
        while(i<j){
            int area=0;
            if(height[i] < height[j]){
                area = height[i]*(j-i-1);
                i++;
            }else{
                area = height[j]*(j-i-1);
                j--;
            }
            // cout<<area<<"\n";
            mxarea = max(area,mxarea);
        }
        return mxarea;
    }
};
