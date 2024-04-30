#include <bits/stdc++.h>
using namespace std;
// find ^3 and add those number ,i wil find the same number

int main(){
    int n;
    cin>>n;

    int sum = 0;
    int originaln = n;
    while(n>0)
    {
        int lastDigit = n%10;
        sum += pow(lastDigit,3);
        n /= 10;
        cout<<lastDigit<<" ";
    }
    cout<<sum;
    if(sum == originaln)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}
