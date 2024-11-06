#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    int digit1 = a%10;
    int digit2 = b%10;
    int sum = digit1 + digit2; 
    cout<<sum;
    return 0;
}