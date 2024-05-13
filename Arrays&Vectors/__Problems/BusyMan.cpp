//Link: https://www.spoj.com/problems/BUSYMAN/
#include <bits/stdc++.h>
 
 
using namespace std;


int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
	cin>>n;
	vector<pair<int,int>> v(n);

	for(int i=0;i<n;i++)cin>>v[i].second>>v[i].first;
	sort(v.begin(),v.end());
	
	int x=v[0].first;
	int y=v[0].second;
	int ans=1;
	for(int i=1;i<n;i++){

		if(v[i].second>=x){
			ans++;
			x=v[i].first;
			y=v[i].second;
		}
	}

	cout<<ans<<endl;

	}

	return 0;

}
