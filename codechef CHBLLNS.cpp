#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int d,k,R,G,B;
    cin>>t;
    while(t--){
        cin>>R >>G >>B;
        cin>>k;
        if(k==1)
            cout<<k<<"\n";
        else{
        d=(min((k-1),R)+min((k-1),G)+min((k-1),B)+1);
        cout<<d<<"\n";
    }}
    return 0;
}
