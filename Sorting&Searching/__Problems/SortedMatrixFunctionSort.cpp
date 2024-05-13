//{ Driver Code Starts
// Initial Template for C++
//Link: https://www.geeksforgeeks.org/problems/sorted-matrix2333/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector <int> ans;
        
        
        for(int i=0;i<N;i++){
            
            for(int j=0;j<N;j++){
                ans.push_back(Mat[i][j]);
            }
        }
        
        sort(ans.begin(),ans.end());
        
      
        int pos=0;
         for(int i=0;i<N;i++){
            
            for(int j=0;j<N;j++){
                Mat[i][j]=ans[pos++];
            }
        }
        
        return Mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends
