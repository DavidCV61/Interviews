#include <bits/stdc++.h>

using namespace std;






int main() {

string s;
getline(cin,s);
stringstream xd(s);

string token;
vector <string> tokens;
while(getline(xd,token,' ')){
    tokens.push_back(token);
}

for(auto token:tokens) cout<<token<<",";




return 0;

}
