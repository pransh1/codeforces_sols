#include<iostream>
using namespace std;
 
int main(){
  int mat[5][5];
  int r,c;
  for(int row=0;row<5;row++){
    for(int col=0;col<5;col++){
      cin>>mat[row][col];
      if(mat[row][col] == 1){
        r = row;
        c = col;
      }
    }
  }
  cout<<abs(r-2) + abs(c-2)<<endl;   
  return 0;
}