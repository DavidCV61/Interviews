//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
        
        priority_queue<int> pq;
        unordered_map <int,int> m;
        for(int i=0;i<k;i++)pq.push(arr[i]);
        
        vector <int> v;
        int pos=0;
        
        for(int i=k;i<n;i++){
            
            
            m[arr[pos]]++;
            v.push_back(pq.top());
            while(m[pq.top()]>0){
                
                m[pq.top()]--;
                pq.pop();
                
            }
            
            pos++;
            pq.push(arr[i]);
            
            
            
        }
        
          v.push_back(pq.top());
        
        return v;
        
        
    }
};

//{ Driver Code Starts.
//Link: https://www.geeksforgeeks.org/problems/ipl-2021-match-day-2--141634/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends
