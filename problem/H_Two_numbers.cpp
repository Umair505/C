#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    int f = floor(a/b);
    int c = ceil(a/b);
    int r = round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<f<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<r<<endl;
    return 0;
}