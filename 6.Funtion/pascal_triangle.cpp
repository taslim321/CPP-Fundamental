//1
//1 1
//1 2 1
//1 3 3 1
#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
    int factorial = 1;
    for( int i = 2; i<=num; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 1; j<n-i+1; j++)
        {
            cout<<" "; 
        }
        for(int j = 0; j<=i;j++)
        {
            cout<<fact(i)/(fact(j) * fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
