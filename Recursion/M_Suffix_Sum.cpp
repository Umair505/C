#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll suff_sum(int arr[],ll n,int i)
{
    if(i>n) return 0;
    return arr[i] + suff_sum(arr,n,i+1);
}
int main()
{
    ll n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    ll ans = suff_sum(arr,n,n-m+1);
    cout<<ans;
    return 0;
}