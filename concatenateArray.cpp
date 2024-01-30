#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;

bool sortBySecond(const pair<string,int> a,const pair <string,int> b){
    return b.second>a.second;
}

signed main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <pair <string,int> > v(n);
        for(int i=0;i<n;i++){
            string s;
            int r;
            cin>>s>>r;
            // cout<<s<<" "<<r<<endl;
            v[i].first=s;
            v[i].second=r;

        }
        sort(v.begin(),v.end(),sortBySecond);

        for(int i=0;i<n;i++){
            cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
        }
    }
    return 0;
}