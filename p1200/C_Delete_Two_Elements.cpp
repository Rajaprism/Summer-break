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
 
// functions
ll square(int n){ll ans=n*n;return ans;}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
 
void solve()
{
    int n;
    cin>>n;
    vi v(n,0);
    ll s=0;
    f(i,0,n){cin>>v[i];s+=v[i];}
    sort(v.begin(),v.end());
    if(s%n!=0)
    {
        cout<<0;
    }
    else
    {
        int k=2*(s/n);
        int l=0,r=n-1;
        int ans=0;
        while(l<r)
        {
            if(v[l]+v[r]<k)
            {
                l++;
            }
            else if(v[l]+v[r]>k)
            {
                r--;
            }
            else
            {

                
                if(v[l]==v[r])
                {
                    ans+=((r-l+1)*(r-l))/2;
                    break;
                }
                else
                {
                    if(v[l]==v[l+1]){l++;}
                    else if(v[r]==v[r-1]){r--;}
                    else{l++;}
                }
                ans++;
            }
        }
        cout<<ans;
    }
    cout<<endl;

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
