using namespace std;
#include<iostream>
#include<cstdlib>
#include<map>
#include<vector>
#include<algorithm>


bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
    return (a.second < b.second);
}

int main(){
    freopen("notlast.in","r",stdin);
    freopen("notlast.out","w",stdout);

    int n,m,sst;
    cin>>n;
    map<string, int> info;
    for(int i = 0;i<n;i++){
        string s; int a;
        cin>>s>>a;
        info[s]+=a;
    }

    
    
    vector<pair<string,int> > cows;
    for(pair<string,int> t : info){
        string d = t.first;
        int e = t.second;
        cows.push_back (make_pair(d,e));
    }
    sort(cows.begin(),cows.end(),sortbysec);

    if(cows.size()<7){m = 0;}
    else{m = cows[0].second;}

    //cout<<m<<endl;
    /*
    for(int i=0;i<cows.size();i++){
        if(cows[i].second<=m){cows.erase(cows.begin()+i-1);}
        else{break;}
    }
    */
    while(cows[0].second<=m){
        cows.erase(cows.begin());
    }
    sst = cows[0].second;
    if(cows[1].second==sst){cout<<"Tie"<<endl;}
    else{cout<<cows[0].first<<endl;}

    /*
    for(auto x: info){
       cout<<x.first<<" "<<x.second<<endl;
    }
    */
   
}



