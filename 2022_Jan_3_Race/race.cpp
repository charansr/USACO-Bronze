#include <iostream>
#include <cstdlib>
using namespace std;

int solve(int slimnum,int dist){
    int timeused=0;
    int dtraveledwf=0;
    int dtraveledws=0;
    for(int currspeed=1;;currspeed++){
        dtraveledwf+=currspeed;
        timeused++;
        if(dtraveledwf+dtraveledws>=dist){return timeused;}
        if(currspeed>=slimnum){
            dtraveledws+=currspeed;
            timeused++;
            if(dtraveledwf+dtraveledws>=dist){return timeused;}
        }
    }
}

int main(){
    freopen("race.in","r",stdin);
    freopen("race.out","w",stdout);

    int k,n;
    cin>>k>>n;
    int slim[n];
    for(int i=0;i<n;i++){cin>>slim[i];}
    for(int i=0;i<n;i++){
        cout<<solve(slim[i],k)<<endl;
    }
}