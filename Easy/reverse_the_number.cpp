#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n=0,remainder,reverse_number=0;
  cin>>n;
  while (n!=0)
  {
    remainder=n%10;
    reverse_number=reverse_number*10+remainder;
    n=n/10;
  }
  cout<<reverse_number;  
  return 0;
}