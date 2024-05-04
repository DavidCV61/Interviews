#include <bits/stdc++.h>

using namespace std;






int main() {

char input[10000];
cin.getline(input,10000);
char *token =strtok(input," ");
cout<<token<<endl;

while(token!=NULL){
    token=strtok(NULL," ");
    cout<<token<<endl;
}




return 0;

}
