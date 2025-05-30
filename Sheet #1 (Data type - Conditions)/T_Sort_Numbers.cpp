#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mini=min({a,b,c});
    int maxm=max({a,b,c});
    int mid=(a+b+c)-(mini+maxm);
    
    cout<<mini<<endl<<mid<<endl<<maxm<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
    return 0;
}