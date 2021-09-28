#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int i,j,k,l;
  char ch;
  cin>>ch;
  if(ch=='V'){
    for(i=1;i<=5;i++){
      for(j=1; j<=i;j++)
      {
        cout<<j;
      }
      for(k=5;k>=j;k--){
        cout<<" ";
      }
      for(k=5;k>=j;k--)
      {
        cout<<" ";
      }
      for(l=1;l<=i;l++)
      {
        cout<<j-l;
      }
      cout<<endl;
    }
    
  }
  return 0;
}