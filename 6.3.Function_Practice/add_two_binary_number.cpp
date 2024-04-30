#include <bits/stdc++.h>
using namespace std;

int addBinary(int a,int b)
{
    int ans = 0;
    int preCarry = 0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2 == 0)
        {
            ans = ans*10 + preCarry;
            preCarry = 0;
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b

    cout<<addBinary(a,b)<<endl;
    return 0;
}
