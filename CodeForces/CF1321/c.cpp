#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main(){
    int n;
    string s;
    cin >> n >> s;
    int removed = 0;
    int change = 0;
    for(int i = (int)'z'; i>=(int)'a'; i--){
        change = 0;
        for(int j = 0; j<n; j++){
            if((int)s[j]==i){
                int l=0;
                int r=0;
                if(j>0) l = (int)s[j-1];
                if(j<n-1) r = (int)s[j+1];
                if(l==i-1 || r==i-1){
                    string temp = "";
                    for(int k = 0; k<n; k++){
                        if(k==j) continue;
                        temp.push_back(s[k]);
                    }
                    n--;
                    s = temp;
                    j--;
                    removed++;
                    change++;
                }
            }
        }
        if(change>0) i++;
    }
    cout << removed << "\n";
    return 0;
}