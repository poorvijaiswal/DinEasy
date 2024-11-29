#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int flag=0, max_count=0, count=0;
        for (int i = 1; i < n; i++)
        {
            if(a[i]==a[i-1]) {
                if(i==1) count++;
                count++;}
            else if((a[i]-a[i-1])==1&&flag>=0){
                flag=1;
                count++;
            }
            else if((a[i-1]-a[i]==1&&flag<=0)){
                flag=-1;
                count++;
            }
            else{
                max_count=max(max_count,count);
                count=0;
            }
        }
        cout<<max_count<<endl;
    }
    
    return 0;
}