#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define pi acos(-1)
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define no  cout<<"no\n"
#define NO  cout<<"NO\n"
#define No  cout<<"No\n"
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fin(a) for (auto &x : a) cin>>x
#define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;
int romanToInt(string s) {
        int n=s.size();
        int sum=0,x=0,y=0;
        for(int i=0; i<n; i++)
        {
           if(s[i]=='I')x=1;
           else if(s[i]=='V')x=5;
           else if(s[i]=='X')x=10;
           else if(s[i]=='L')x=50;
           else if(s[i]=='C')x=100;
           else if(s[i]=='D')x=500;
           else if(s[i]=='M')x=1000;
           if(x>y)
           {
            sum+=x-2*y;
           }
           else{
            sum+=x;
           }
           y=x;
        }
        return sum;
    }
void Kuldip_Saha_Mugdha()
{
     string s;cin>>s;
    int ans=romanToInt(s);
    cout<<ans<<endl;
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}