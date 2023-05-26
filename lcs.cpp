#include "lcs.h"
#include <bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
using namespace std;

string lcs(string A, string B) {
  vector<vector<int> >dp;
  dp.clear();
  dp.resize(A.length()+1,vector<int>(B.length()+1,0));

  for(int i=1;i<=A.length();i++){
    for(int j=1;j<=B.length();j++){
      if(A[i-1]==B[j-1]){
        dp[i][j] = 1 + dp[i-1][j-1];
      } else{
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }
  string s = "";

  int i=A.length(),j=B.length();
  while(i>0 and j>0){
    if(A[i-1]==B[j-1]){
      s+=A[i-1];
      i--;
      j--;
    } else if(dp[i-1][j]>dp[i][j-1]){
      i--;
    } else {
      j--;
    }
  }
  reverse(s.begin(),s.end());
  return s;
}

// int main(){
//   string A,B;
//   cin>>A>>B;
//   cout<<lcs(A,B);
//   return 0;
// }
