#include <bits/stdc++.h>
using namespace std;
//binary to decimal
int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n/=10;
    }
    return ans;
}
//octal to decimal
int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n/=10;
    }
    return ans;
}
//hexdecimal to decimal
int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    for(int i = n.size()-1; i>=0 ; i--)
    {
        if(n[i] >= '0' && n[i]<='9')
        {
            ans += x*(n[i]-'0');
            
        }else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans+=x*(n[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
//decimal to binary

int main(){
    int n;
    // cin>>n;
    string p;
    cin>>p;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    cout<<hexadecimalToDecimal(p)<<endl;
    return 0;
}
