//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
//Link:  https://www.geeksforgeeks.org/problems/smallest-distant-window3132/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        
      
        int n=str.size();
        
        unordered_set <char> s;
        
        for(int i=0;i<n;i++) s.insert(str[i]);
        int limit=s.size();
        int i=0;
        int j=0;
        
        unordered_map<char,int> m;
        unordered_set<char> a;
        
        int dist=n;
        
        
        
        while(i<n){
            
            a.insert(str[i]);
            m[str[i]]++;
            
            
                
                while(a.size()==limit && j<=i){
                    
                    //cout<<j<<" "<<i<<endl;
                    dist=min(dist,i-j+1);
                    m[str[j]]--;
                    if(m[str[j]]==0) a.erase(str[j]);
                    j++;
                    
                    
                }
          i++;
            
            
        }
        
        
        return dist;
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends
