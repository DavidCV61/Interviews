#include <bits/stdc++.h>


using namespace std;

int main(){


int n;
cin>>n;

vector <int> v(n);
for(int i=0;i<n;i++)cin>>v[i];


vector<int> ans1(n,1);
vector <int> ans2(n,1);




for(int i=1;i<n;i++){

	ans1[i]=v[i-1]*ans1[i-1];
	ans2[n-i-1]=v[n-i]*ans2[n-i];
}

for(int i=0;i<n;i++)cout<<ans1[i]*ans2[i]<<endl;
	





	return 0;
}
