//Link: https://hack.codingblocks.com/app/practice/6/1038/problem
#include<bits/stdc++.h>


using namespace std;

int count_bits_hack(int n){

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;

}


int main() {

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		cout<<count_bits_hack(n)<<endl;
	}
	return 0;
}
