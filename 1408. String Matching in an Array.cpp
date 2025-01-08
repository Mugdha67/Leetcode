#include<bits/stdc++.h>
#include<vector>
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
vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(i!=j && words[j].find(words[i])!=string::npos){
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
void Kuldip_Saha_Mugdha()
{
     vector<string> words1 = {"mass", "as", "hero", "superhero"};
    vector<string> result1 = stringMatching(words1);
    fout(result1);

    vector<string> words2 = {"leetcode", "et", "code"};
    vector<string> result2 = stringMatching(words2);
    fout(result2);

    vector<string> words3 = {"blue", "green", "bu"};
    vector<string> result3 = stringMatching(words3);
    fout(result3);
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}