#include <bits/stdc++.h>

using namespace std;


char *mystrtok(char *str, char delim){
    static char *input=NULL;
    if(str!=NULL){
        input= str;
    }
    if(input==NULL) return NULL;
    int i=0;
   char *token =new char[strlen(input)+1];
    for(  ; input[i]!='\0';i++){
        if(input[i]!=delim) token[i]=input[i];
        else{
            token[i]='\0';
            input=input+1+i;
            cout<<"dp: "<<token<<endl;
            return token;
        }


    }

    token[i]='\0';
    input=NULL;
    return token;


}



int main() {

char input[10000];
cin.getline(input,10000);
char *token =mystrtok(input,' ');
//cout<<token<<endl;

while(token!=NULL){
    
    cout<<token<<endl;
    token=mystrtok(NULL,' ');
}




return 0;

}
