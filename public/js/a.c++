#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m, count=0;
    cin>>n>>m;
    long long int a[n];
    map<int,int>ma;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        int index=a[i]%m;
        ma[index]++;
    }
    // for(auto i=ma.begin();i!=ma.end();i++){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }
    int q;
    cin>>q;
    while(q--){
        int chck;
        cin>>chck;
        if(chck==1){
            long long int b;
            int index;
            cin>>index>>b;
            ma[a[index-1]%m]--;
            ma[b%m]++;
        }
        else{
            int x;
            cin>>x;
            cout<<ma[x]<<endl;
        }
    }
    return 0;
}