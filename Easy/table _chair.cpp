#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //write your code here
  long long M,R1,R2,R3;
  int T;
  cin>>T;
  while(T--)
  {
    cin>>M>>R1>>R2>>R3;
    if(M%4==0) cout<<0<<endl;
    if(M%4==3) cout<<min(R1,min(R2+R3,R3+R3+R3))<<endl;
    if(M%4==2) cout<<min(R2,min(R1,R3)*2)<<endl;
    if(M%4==1) cout<<min(R3,min(R1+R2,R1+R1+R1))<<endl;
  }
  return 0;
}
