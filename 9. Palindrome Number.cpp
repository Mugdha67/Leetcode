#include<bits/stdc++.h>
#include<string>
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
bool isPalindrome(int x) {
        if(x<0) return false;
        else{
            int haldu=x;
            string shourav=to_string(x);
            string eda_mone=to_string(haldu);
            reverse(shourav.begin(), shourav.end());
            if(eda_mone==shourav) return true;
            else return false;
        }
    }
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int naima=isPalindrome(n);
    if(naima) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}