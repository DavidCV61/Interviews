#include <bits/stdc++.h>


using namespace std;


int main(){

    int n,m;

    cin>>n>>m;

    vector <int> v1(n);
    vector <int> v2(m);

    for(int i=0;i<n;i++) cin>>v1[i];
    for(int i=0;i<m;i++) cin>>v2[i];

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int j=0;
    int ans=INT_MAX;
    pair <int,int> p;


    for(int i=0;i<n;i++){

        while(j<m){

            int aux=abs(v1[i]-v2[j]);
          

            if(aux<=ans){

                p.first=v1[i];
                p.second=v2[j];

                ans=aux;
                j++;
            }else{

                j--;
                break;
            }
        }

    }

cout<<p.first<<" "<<p.second<<endl;
cout<<ans<<endl;


    return 0;
}
