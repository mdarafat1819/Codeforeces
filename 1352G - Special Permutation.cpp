#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n < 4) cout<<"-1"<<endl;
        else
        {
            for(int i = n; i >= 1; i--) if(i % 2) cout<<i<<" ";
            cout<<"4 2 ";
            for(int i = 6; i <= n; i += 2) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
