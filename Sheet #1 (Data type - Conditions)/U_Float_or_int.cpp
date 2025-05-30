#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    float result=n-(int)n;
    if(result==0.0){cout<<"int "<<(int)n;}
    else{cout<<"float "<<(int)n<<" "<<fixed<<setprecision(3)<<result;}
    return 0;
}