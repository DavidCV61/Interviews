//Link: https://leetcode.com/problems/product-of-array-except-self/description/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
    int n=v.size();
vector<int> ans1(n,1);
vector <int> ans2(n,1);




for(int i=1;i<n;i++){

	ans1[i]=v[i-1]*ans1[i-1];
	ans2[n-i-1]=v[n-i]*ans2[n-i];
}
vector <int> ans(n);
for(int i=0;i<n;i++)ans[i]=ans1[i]*ans2[i];

return ans;
    }
};
