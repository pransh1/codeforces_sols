#include<iostream>
using namespace std;
 
int main() {
  string s1, s2;
  cin >> s1 >> s2;
  for(int i = 0; i < s1.length(); i++) {
    if(s1[i] >= 'A' && s1[i] <= 'Z') s1[i] = s1[i] + ('a' - 'A');
    if(s2[i] >= 'A' && s2[i] <= 'Z') s2[i] = s2[i] + ('a' - 'A');
  }
  for(int i = 0; i < s1.length(); i++) {
    if(s1[i] < s2[i]) {
      cout << -1 << endl;
      return 0;
    } else if(s1[i] > s2[i]) {
      cout << 1 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}