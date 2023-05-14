#include<iostream>
#include<tuple>
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<set>
#include<unordered_set>
#include<bitset>
#include<cmath>
#include<numeric>
#include<algorithm>
#include<stack>

// #include<bits/stdc++.h>
//sum of sqaures of natural no--- n(n + 1)(2n + 1)/6
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pi;
typedef vector<pi > vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pl;
typedef vector<pl > vll;

const ll mo=(1000000000 + 7);
const ll inf=1e18;

#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define fbe(s) s.begin(),s.end()
#define fs(p) p.size()
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define it iterator
#define mt make_tuple
 
 
void solve()
{
    int n,q;
    cin>>n>>q;
    vi v(n,0);
    vl s(n+1,0);
    ll sum=0;
    f(i,0,n)
    {
        cin>>v[i];
        s[i+1]=v[i]+s[i];
        sum+=v[i];
    }
    vi vl(q,0);
    vi vr(q,0);
    vi vk(q,0);
    f(i,0,q){cin>>vl[i]>>vr[i]>>vk[i];}
    f(i,0,q)
    {
        ll newsum=sum+vk[i]*(vr[i]-vl[i]+1)-(s[vr[i]]-s[vl[i]-1]);
        if(newsum%2)
        {
            cout<<"YES"<<endl;;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
 
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
}
