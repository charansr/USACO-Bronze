using namespace std;
#include <iostream>
#include <cstdio>

int main(){
    
    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);
    

    int n,onec,twoc,trec,a,b,c,g,checker;
    onec=0;
    twoc=0;
    trec=0;
    cin>>n;

    int info[n][3];
    int ground[n+1][3];
    ground[0][0]=1;
    ground[0][1]=2;
    ground[0][2]=3;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin>>info[i][j];
        }
    }
    
    for(int i = 0;i<n;i++){
        a = info[i][0];
        b = info[i][1];
        c = 6-a-b-1;
        
        ground[i+1][a-1]=ground[i][b-1];
        ground[i+1][b-1] = ground[i][a-1];
        //cout<<"c: "<<c<<endl;
        ground[i+1][c] = ground[i][c];
        //cout<<"cycle: "<<i<<endl;
    }
    
    for(int i = 0;i<n;i++){
        g = info[i][2];
        int checker = ground[i+1][g-1];
        if(checker==1){onec++;}
        else if(checker==2){twoc++;}
        else{trec++;}
    }
    
    //cout<<onec<<endl<<twoc<<endl<<trec<<endl;
    int hold = max(onec,twoc);
    cout<<max(hold,trec)<<endl;
    /*
    for(int i = 0;i<=n;i++){
        for(int j=0;j<3;j++){
            cout<<ground[i][j]<<" ";
        }
        cout<<endl;
    }
    */
}