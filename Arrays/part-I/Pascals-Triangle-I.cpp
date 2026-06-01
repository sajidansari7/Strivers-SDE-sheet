class Solution {
public:
   int findcomb(int n,int r){
    if(n==0 || r==0) return 1;
    int ans=1;
    for(int i=1;i<=r;i++){
        ans=(1LL*ans*(n-i+1))/i;
    }
    return ans;
   }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int n=0;n<numRows;n++){
            vector<int> level;
            for(int r=0;r<=n;r++){
                  level.push_back(findcomb(n,r));
            }
            ans.push_back(level);
        }
        return ans;
    }
};
