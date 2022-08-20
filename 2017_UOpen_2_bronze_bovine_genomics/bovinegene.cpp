using namespace std;
#include<iostream>
#include<cstdlib>
#include <vector>
#include <algorithm>

int main(){

    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);

    int n,m,poscount;
    poscount=0;
    cin>>n>>m;
    bool doop;
    char spotty[n][m], plain[n][m];

    //input for spotty
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>spotty[i][j];
        }
    }
    //input for plain
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>plain[i][j];
        }
    }
    
    for(int j=0;j<m;j++){
        doop=false;
        for(int i = 0;i<n;i++){
            for(int k = 0;k<n;k++){
                if(spotty[i][j]==plain[k][j]){
                    doop = true;
                    break;
                }
            }

        }
        if(!doop){poscount++;}
    }
    cout<<poscount<<endl;
}
