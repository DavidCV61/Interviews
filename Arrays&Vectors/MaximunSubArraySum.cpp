#include <bits/stdc++.h>


using namespace std;



int main(){


int n;
cin>>n;

vector <int> v(n);

for(int i=0;i<n;i++) cin>>v[i];


vector <int> ans(n+1);


ans[0]=0;


for(int i=0;i<n;i++) ans[i+1]=ans[i]+v[i];

int maxi=INT_MIN;
cout<<maxi<<endl;
int pos=0;


for(int i=1;i<=n;i++){


    if(ans[i]>=maxi){

        maxi=ans[i];
        pos=i-1;
    }
}


int sum=maxi;


for(int i=0;i<=pos;i++){

    sum=max(maxi-ans[i],sum);
}

cout<<sum<<endl;







    return 0;
}
