#include <bits/stdc++.h>

using namespace std;


int main() {

string paragraph="We are learning about STL strings. STL string class is quite powerful";
string word;
getline(cin,word);

int index=paragraph.find(word);
if(index==-1) cout<<"string not found"<<endl;
else cout<<"the string is in postion: "<<index<<endl;

index=paragraph.find(word,index+1);
cout<<"2)"<<endl;
if(index==-1) cout<<"string not found"<<endl;
else cout<<"the string is in postion: "<<index<<endl;

return 0;

}
