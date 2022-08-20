using namespace std;
#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

int main(){
    freopen("balancing.in","r",stdin);
    freopen("balancing.out","w",stdout);

    int n,b,m,a;
    m=1410065408;
    cin>>n>>b;
    int points[n][2];
    int xlines[n];
    int ylines[n];

    for(int i=0;i<n;i++){
        cin>>points[i][0]>>points[i][1];
        xlines[i]=points[i][0]+1;
        ylines[i]=points[i][1]+1;
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int tl,tr,bl,br;
            tl=0;
            tr=0;
            bl=0;
            br=0;
            for(int k=0;k<n;k++){
                if(points[k][0]>xlines[i] && points[k][1]>ylines[j]){tr++;}
                if(points[k][0]>xlines[i] && points[k][1]<ylines[j]){br++;}
                if(points[k][0]<xlines[i] && points[k][1]>ylines[j]){tl++;}
                if(points[k][0]<xlines[i] && points[k][1]<ylines[j]){bl++;}

            }
            a =  max(max(tr,br),max(tl,bl));
            m = min(m,a);
        }
    }
    cout<<m<<endl;
}
