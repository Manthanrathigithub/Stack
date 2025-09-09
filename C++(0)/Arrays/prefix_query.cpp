#include<iostream>
#include<vector>
using namespace std;
/*0 based indexing ----> 0........n-1
1 based indexing ------> 1........n

 0 5 1 2 3 4  vector will look like
 input---> 5 1 2 3 4
 prefix sum----> 0 5 6 8 11 15
 l=1 r=3 
 ans = v[r] + v[l-1] = 8 + 0 = 8
*/
int main()
{
   int n;
   cin>>n;
   vector<int>v(n+1,0);
   for (int i=1;i<n+1;i++){
      cin>>v[i];
   }
   for (int i=1;i<=n;i++){
      v[i]+=v[i-1];
   }
   int q;
   cin>>q;
   while (q--){
      int l,r;
      cin>>l>>r;
      int ans=0;
      ans = v[r] -  v[l-1];
      cout<<ans<<endl;
   }
}