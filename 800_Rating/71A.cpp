#include<iostream>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t-- > 0) {
    string s;
    cin>>s;
    if(s.length() <= 10) cout<<s<<endl;
    else {
      string ans = s[0] + to_string(s.length() - 2) + s[s.length()-1];
      cout<<ans<<endl;
    }
  }
}