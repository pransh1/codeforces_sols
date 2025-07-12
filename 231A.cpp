#include<iostream>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  int count = 0;
  while(t-- > 0) {
    int petya, vasya, tanya;
    cin >> petya >> vasya >> tanya;
    int sum = petya + vasya + tanya;
    if(sum >= 2) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}