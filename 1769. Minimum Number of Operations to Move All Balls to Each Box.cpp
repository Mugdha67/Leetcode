#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<math.h>
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
vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
           int b=0;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                else if(boxes[j]=='0') continue;
                else if(boxes[j]=='1'){
                    b+=abs(i-j);
                }
            }
            a[i]=b;
        }
        return a;
    }
void Kuldip_Saha_Mugdha()
{
    string s;cin>>s;
    vector<int>a=minOperations(s);
   fout(a);

}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}
