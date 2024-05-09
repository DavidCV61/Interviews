#include <bits/stdc++.h>
 
 
using namespace std;
string unica(string str){

	int i=0;
	int j=0;
	int window=0;
	int maxwindow=0;
int startwindow=-1;
	unordered_map<char,int> m;


	while(j<str.size()){


		char ch=str[j];

		if(m.count(ch) and m[ch]>=i){
			i=m[ch]+1;
			window=j-i;

		}

		m[ch]=j;
		window++;
		j++;

		if(window>maxwindow){
			maxwindow=window;
			startwindow=i;
		}
	}

	return str.substr(startwindow,maxwindow);
}


int main(){


	string input;
	cin>>input;

	cout<<unica(input)<<endl;
	return 0;

}
