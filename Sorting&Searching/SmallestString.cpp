#include <bits/stdc++.h>
 
 
using namespace std;
bool compare(string x,string y){
	return x+y<y+x;

}

int main(){

	int n=3;
	string arr[]={"a","ab","aba"};

	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;

}
