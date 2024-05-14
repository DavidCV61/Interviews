#include <bits/stdc++.h>
 //Link: https://www.spoj.com/problems/BAISED/
//Nota: Se puede optimizar a O(n) Usando Python


 
using namespace std;


int main(){

int t;
cin>>t;
while(t--){
		int n;
	cin>>n;

	vector <long long> v(n);
	string s;
for(int i=0;i<n;i++)cin>>s>>v[i];

	sort(v.begin(),v.end());
	long long ans=0;
	for(int i=0;i<n;i++){

		ans+=abs(v[i]-(i+1));

	}

	cout<<ans<<endl;

}

	
	return 0;

}
