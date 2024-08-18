#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>u(n);
    for(int i=1;i<=n;i++){
        int x,y;
       cin>>x>>y;
        u[x]=y;
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(u[a]>=c){
    u[a]-=c;
    u[b]+=c;
    cout<<"Success"<<endl;
} else{
    cout<<"Failure"<<endl;
        }
    }
    cout<<endl;
vector<pair<int,int>>r(n);
for (int i = 1; i <= n; ++i) {
        r[i - 1] ={u[i], i};
    }
    sort(r.begin(),r.end(),[](const pair<int,int>&x,const pair<int,int>&y){
        return x.first<y.first;
    });
    for (const auto&[first,second]:r){
        cout<<second<<" "<<first<<endl;
    }
      
    return 0;
}
