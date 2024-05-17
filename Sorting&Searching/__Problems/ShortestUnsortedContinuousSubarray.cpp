class Solution {
public:
//Link: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        
            int aux=nums[0];
            int c=-1000007;
           
            stack <int> s;

        for(int i=1;i<n;i++){
            
            if(nums[i]<aux){
                s.push(nums[i]);
                ans[i]=c;
               
            }else {
                aux=nums[i];
                ans[i]=nums[i];
            }


        }

for(int i=0;i<n;i++)cout<<ans[i]<<" ";
cout<<endl;
int maxi,mini;
maxi=INT_MIN;
mini=INT_MAX;

bool flag=s.empty();



    while(!s.empty()){
        cout<<s.top()<<" ";
        maxi=max(s.top(),maxi);
        mini=min(s.top(),mini);
        s.pop();
   
    }
cout<<mini<<" "<<maxi<<endl;
    int a,b;
if(!flag){

    for(int i=0;i<n;i++){
        if(nums[i]>mini){
            a=i;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(ans[i]==c) {
            a=min(a,i);
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(nums[i]<maxi){
            b=i;
            cout<<endl<<b<<endl;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(ans[i]==c) {
            b=max(b,i);
            break;
        }
    }
    cout<<endl<<a<<" "<<b<<endl;

    return b-a+1;
} return 0;


   
       
        
    }
};
