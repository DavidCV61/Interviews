
#include <bits/stdc++.h>

using namespace std;


int main(){

int n, m;
cin>>n>>m;

vector <int> v(n);
for(int i=0;i<n;i++) cin>>v[i];


unordered_set <int> s;

int x=m-v[0];
s.insert(x);

for(int i=1;i<n;i++){




	if(s.find(v[i])!=s.end()){

cout<<m-v[i]<<" "<<v[i]<<endl;
break;

	}else{
x=m-v[i];
s.insert(x);

	}
}



	return 0;
}
