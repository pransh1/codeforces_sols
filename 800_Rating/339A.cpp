#include<iostream>
 
using namespace std;
 
int main() {
    string s;
    cin>>s;
    char dig[101];
    int idx = 0;
    for(int i=0; s[i] != '\0'; i++) {
      if(s[i] != '+') {
        dig[idx++] = s[i];
      } 
    }
    for(int i=0;i<idx-1;i++) {
      for(int j = 0; j< idx - i -1; j++) {
        if(dig[j] > dig[j+1]){
          char temp = dig[j];
          dig[j] = dig[j+1];
          dig[j+1] = temp;
        }
      }
    }
    
    int d = 0;
    for(int i=0;s[i] != '\0'; i++) {
      if(s[i] != '+') {
        s[i] = dig[d++];
      }
    }
    cout<<s<<endl;
}