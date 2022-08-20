#include <iostream>
using namespace std;

int main(){

    freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);

    int b1area,b2area,trarea1,trarea2,width1,width2,length1,length2,ans;

    // coords
    int bill1[4];
    int bill2[4];
    int truck[4];
    
    for(int i=0;i<4;i++){cin>>bill1[i];}
    for(int i=0;i<4;i++){cin>>bill2[shii];}
    for(int i=0;i<4;i++){cin>>truck[i];}    

    b1area = (bill1[2]-bill1[0])*(bill1[3]-bill1[1]);
    b2area = (bill2[2]-bill2[0])*(bill2[3]-bill2[1]);

    for(int i=0;i<4;i++){bill1[i]+=1000;}
    for(int i=0;i<4;i++){bill2[i]+=1000;}
    for(int i=0;i<4;i++){truck[i]+=1000;}

    width1 = max(min(bill1[2],truck[2])-max(bill1[0],truck[0]),0);
    length1 = max(min(bill1[3],truck[3])-max(bill1[1],truck[1]),0);
    trarea1 = width1*length1;
    //cout<<trarea1<<endl;

    width2 = max(min(bill2[2],truck[2])-max(bill2[0],truck[0]),0);
    length2 = max(min(bill2[3],truck[3])-max(bill2[1],truck[1]),0);
    trarea2 = width2*length2;
    //cout<<trarea2<<endl;

    ans = b1area+b2area-trarea1-trarea2;
    cout<<ans;    
}