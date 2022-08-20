using namespace std;
#include <cstdlib>
#include <iostream>
#include <map>


int main(){

    freopen("blocks.in","r",stdin);
    freopen("blocks.out","w",stdout);

    
    int n;
    cin>>n;
    string words[n][2];
    char alph[26];
    map<char, int> lettervals;
    

    //making array of alphabets
    for(char countal = 'a'; countal <= 'z';countal++){
        int i =0;
        alph[i]=countal;
        i++;
        lettervals.insert(make_pair(countal,0));
    }

    //inputting into array
    for(int i = 0;i<n;i++){
        cin>>words[i][0]>>words[i][1];
    }
    
    //important stuff
    for(int i = 0;i<n;i++){
        //first word
        map<char, int> word1vals;
        string word1 = words[i][0];
        for(int j=0;j<word1.length();j++){
            char check1 = word1[j];
            if(word1vals.find(check1) != word1vals.end()){
                word1vals[check1]++;
            }else{
                word1vals.insert(make_pair(check1,1));
            }
        }

        //2nd word
        map<char, int> word2vals;
        string word2 = words[i][1];
        for(int j=0;j<word2.length();j++){
            char check2 = word2[j];
            if(word2vals.find(check2) != word2vals.end()){
                word2vals[check2]++;
            }else{
                word2vals.insert(make_pair(check2,1));
            }
        }

        for(char lower='a';lower<='z';lower++){
            //cout<<word1vals[lower]<<endl<<word2vals[lower]<<endl;
            //cout<<"max: "<<max(word1vals[lower],word2vals[lower])<<endl;
            lettervals[lower]+=max(word1vals[lower],word2vals[lower]);
        }

    }

    for(char countal = 'a'; countal <= 'z';countal++){
        cout<<lettervals[countal]<<endl;
    }
}