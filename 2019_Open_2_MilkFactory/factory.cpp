#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

    freopen("factory.in","r",stdin);
    freopen("factory.out","w",stdout);

    int n;
    cin>>n;
    int outg[n];
    int ing[n];
    for(int i=0;i<n;i++){outg[i]=0;ing[i]=0;}
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        outg[a]++;
        ing[b]++;
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(outg[i]==0&&ans!=-1){ans=-1;break;}
        if(outg[i]==0){ans=i+1;}
    }
    cout<<ans<<endl;
}