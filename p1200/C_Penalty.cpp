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
    string s;
    cin>>s;

    int a=0,b=0;
    int ans1=10,ans2=10;
    f(i,1,11)
    {
        if(s[i-1]=='1')
        {
            if(i%2){a++;}
            else{b++;}
        }
        else if(s[i-1]=='?')
        {
            if(i%2){a++;}
        }
        if(b+((10-i)/2)+((10-i)%2)<a)
        {
            ans1=i;break;
        }
        // cout<<i<<" "<<a<<" "<<b<<endl;
    }

    a=0,b=0;
    f(i,1,11)
    {
        if(s[i-1]=='1')
        {
            if(i%2){a++;}
            else{b++;}
        }
        else if(s[i-1]=='?')
        {
            if(i%2==0)
            {b++;}
        }
        if(a+((10-i)/2)<b)
        {
            ans2=i;break;
        }
    }
    cout<<min(ans1,ans2)<<endl;
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
