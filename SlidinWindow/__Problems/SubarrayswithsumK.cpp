//{ Driver Code Starts
//Link: https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        unordered_map<int,int> m;
        int acu=0;
        
        for(int i=0;i<N;i++){
            acu+=Arr[i];
            m[acu]++;
        }
        
      
        
    
        int ans=0;
        acu=0;
        
        for(int i=0;i<N;i++){
            
            ans+=m[k+acu];
           
            acu+=Arr[i];
            m[acu]--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
