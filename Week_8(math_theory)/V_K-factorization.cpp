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
inline void in_out();
inline void solve();
vector<int>v;
void primeFactors(int n) 
{   
    while (n%2 == 0) 
    { 
        v.push_back(2);
        n = n/2; 
    }  
   
    for (int i = 3; i*i <= (n); i = i+2) 
    {   
        while (n%i == 0) 
        { 
            v.push_back(i);
            n = n/i; 
        } 
    } 
     
    if (n > 2) 
        v.push_back(n);  
}
  
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
 int n,k;  cin>>n>>k;
 primeFactors(n);
 if(v.size()<k)cout<<-1;
 else{
    ll s=1;
    for(int i=0;i<k-1;i++)
   {
     cout<<v[i]<<" ";
        s*=v[i];
   }
     cout<<n/s;
 }

}