#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    ll dp[600005];
    for(int i = 0; i<600005; i++){
        dp[i]=0;
    }
    for(int i = 0; i<n; i++){
        int index = arr[i]-i+200000;
        dp[index]+=arr[i];
    }
    ll maxx = 0;
    for(int i = 0; i<600005; i++){
        if(dp[i]>maxx) maxx = dp[i];
    }
    cout << maxx << "\n";
    return 0;
}