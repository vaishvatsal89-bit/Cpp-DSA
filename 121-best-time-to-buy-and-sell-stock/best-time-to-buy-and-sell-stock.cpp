class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int ans=0;
        for(int price :prices){
        minp=min(minp,price);
        ans=max(ans,price-minp);
        }
        return ans;
    }
};