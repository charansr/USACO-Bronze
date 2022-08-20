#include<iostream>
using namespace std;
#include <cstdlib>

int main(){

    freopen("circlecross.in","r",stdin);
    freopen("circlecross.out","w",stdout);

    string crosslocs;
    cin>>crosslocs;
    int pairs=0;
    for(int a = 0; a < crosslocs.size(); a++){
        for(int b =a+1; b<crosslocs.size();b++){
            for(int c=b+1;c<crosslocs.size();c++){
                for(int d = c+1;d<crosslocs.size();d++){
                    pairs += crosslocs[a]==crosslocs[c] && crosslocs[b]==crosslocs[d];
                }
            }
        }
    }

    cout<<pairs<<endl;
}

