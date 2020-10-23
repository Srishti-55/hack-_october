#include <bits/stdc++.h>
using namespace std;

int main()
{

        int n,m;
        cin>>n>>m;
        int arr1[m+1];
        int arr[n+1];

        for(int i=1;i<=n;i++)
            cin>>arr[i];

        for(int i=1;i<=m;i++)
            cin>>arr1[i];
        
        vector<map<int,int> > v;
        map<int,int> mp;
        v.push_back(mp);

        for(int i=1;i<=n;i++)
        {
            mp[arr[i]]++;
            v.push_back(mp);
        }

        int q;
        cin>>q;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            map<int,int> :: iterator it;
            int flag = 0;
            for(it=v[b].begin();it!=v[b].end();it++)
            {
                int x = it->second - v[a-1][it->first];
                // cout<<x<<" "<<it->first<<"\n"; 
                if(x!=it->first && x!=0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<1<<"\n";
            }
            else
            {
                cout<<0<<"\n";
            }
            
        }

    }