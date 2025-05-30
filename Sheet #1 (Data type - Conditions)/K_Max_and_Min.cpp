#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int min1=min(a,b);
    int min2=min(min1,c);
    int max1=max(a,b);
    int max2=max(max1,c);
    cout<<min2<<" "<<max2;
    return 0;
}