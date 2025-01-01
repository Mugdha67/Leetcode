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
int maxScore(string s) {
        int maxScore=0,O=0,Z=0;
        for(char c:s)
        {
            if(c=='1')O++;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')Z++;
            else O--;

            maxScore=max(maxScore,O+Z);
        }
        return maxScore;
    }
void Kuldip_Saha_Mugdha()
{
     string s;cin>>s;
     cout<<maxScore(s)<<endl;
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}