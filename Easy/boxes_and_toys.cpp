#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int no_of_boxes,toys,capacity,count=0;
  cin>>no_of_boxes;
  
  for(int i=1;i<=no_of_boxes;i++)
  {
    cin>>toys>>capacity;
    if(capacity-toys>=2)
        count=count+1;
  }
  cout<<count;
  return 0;
}