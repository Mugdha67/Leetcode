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
string shiftingLetters(string s, vector<vector<int>>& shifts) {
    int n = s.length();
    vector<int> shiftDelta(n + 1, 0);
    for (int i = 0; i < shifts.size(); i++) 
    {
        int start = shifts[i][0];
        int end = shifts[i][1];
        int direction = shifts[i][2];
        if (direction == 1) {
            shiftDelta[start]++;
            shiftDelta[end + 1]--;
        } else {
            shiftDelta[start]--;
            shiftDelta[end + 1]++;
        }
    }
    int cumulativeShift = 0;
    for (int i = 0; i < n; ++i) {
        cumulativeShift += shiftDelta[i];
        int effectiveShift = (cumulativeShift % 26 + 26) % 26;
        s[i] = 'a' + (s[i] - 'a' + effectiveShift) % 26;
    }
    return s;
}
void Kuldip_Saha_Mugdha()
{
     string s = "abc";
    vector<vector<int>> shifts = {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}};
    cout << shiftingLetters(s, shifts) << endl; // Output: "ace"

    s = "dztz";
    shifts = {{0, 0, 0}, {1, 1, 1}};
    cout << shiftingLetters(s, shifts) << endl; // Output: "catz"
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}