#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==1 || c==1)
    {
        if(a==1 && c==1){cout<<"NO";}
        else if(a==1 && c!=1){cout<<"NO";}
        else if(a!=1 && c==1){cout<<"YES";}
    }
    else
    {
        double ab=b*log(a);
        double cd=d*log(c);
        if(ab>cd){cout<<"YES";}
        else{cout<<"NO";}
    }
    return 0;
}