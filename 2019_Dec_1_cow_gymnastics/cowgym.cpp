#include<iostream>
#include<cstdlib>
#include<map>
using namespace std;

int main(){

    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);

    int n,k,checkval,checkvalit,paircount;
    bool yespair;
    paircount=0;
    yespair = true;
    string inp;
    cin>>k>>n;
    map<int, map<string, int> > rankings;

    //map<int, map<string, int> >::iterator itr;
   //map<string, int>::iterator ptr;

    //making all neccessary pairts
    for(int i=0;i<k;i++){
        for(int j=1;j<=n;j++){
            rankings.insert(make_pair(i,map<string,int>()));
            rankings[i].insert(make_pair(to_string(j), 0));
        }
    }

    //assinging points to each key based on location
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin>>inp;
            rankings[i][inp]=j;
        }
    }

    //figuring stuff out
    //big iterator for i
    for(int i=1;i<=n;i++){
        //medium iterator for the value that i is being comparied to
        for(int j=1;j<=n;j++){
            yespair = true;
            if(j==i){continue;}
            //small iterator for the sessions
            for(int h = 0;h<k;h++){
                checkval=rankings[h][to_string(i)];
                checkvalit=rankings[h][to_string(j)];
                if(checkval<checkvalit){yespair = yespair&&true;
                //cout<<"i="<<i<<" j="<<j<<endl;
                }else{yespair=false;}
            }
            if(yespair){paircount++;}
        }
    }

    cout<<paircount<<endl;

    /*
    //test output;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cout<<rankings[i][to_string(j)]<<' ';
        }
        cout<<endl;
    }
    */
}
