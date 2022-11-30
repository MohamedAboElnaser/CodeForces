#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define TC  int t; cin >> t; while (t--) 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define cout(v) for (auto &x : v) cout << x << ' ';
#define cin(v)  for (auto &x : v) cin >> x;
#define prefix(v, n) for (int i = 1; i < n; i++) v[i] += v[i - 1];
#define eps 1e-7
using namespace std;
                
                /******functions Definition******/
void in_out();
void solve();
 
  
int main(){
   in_out();  
    //TC                                        
    solve(); 
   return 0;
}
        /******functions Declaration******/               
inline void in_out(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie();    
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);   
        freopen("out.txt","w",stdout);
    #endif  
}   
inline  void solve(){
 int n,k,temp;  cin>>n>>k;
 int N=n;
 vector<int>v;
 while(n--){
    cin>>temp;
    v.push_back(temp);
 }
 sort(all(v));
 for(int i=N-1;i>=0;i--)
 {
    if(k%v[i]==0)
        {
           cout<<k/v[i];
           break; 
        }
 }   

} 