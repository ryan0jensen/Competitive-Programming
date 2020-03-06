#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    int r1[n];
    int r2[n];
    for(int i = 0; i<n; i++){
        cin >> r1[i];
    }
    for(int i = 0; i<n; i++){
        cin >> r2[i];
    }
    ll points = 0;
    ll wins = 0;
    ll maxx = 1;
    for(int i = 0; i<n; i++){
        if(r1[i]==1 && r2[i]==0){
            wins++;
            points++;
        } else if (r1[i]==0 && r2[i]==1){
            points--;
        }
    }
    if(points<=0 && wins==0){
        cout << -1 << "\n";
        return 0;
    }
    while(points<=0){
        points+=wins;
        maxx++;
    }
    cout << maxx << "\n";
    return 0;
}