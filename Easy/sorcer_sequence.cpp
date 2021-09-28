#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long number_of_testcases,testcase,temp;
    cin>>number_of_testcases;

    for(int i=1;i<=number_of_testcases;i++)
    {
        cin >> testcase;
        cout<<testcase<<" ";
        while(testcase!=1)
        {   
            
            if(testcase%2==0)
            {
                temp=sqrt(testcase);
                testcase=temp;
                cout<<testcase<<" ";
            }
            else
            {
                temp=sqrt(testcase)*sqrt(testcase)*sqrt(testcase);
                testcase=temp;
                cout<<testcase<<" ";
            }
        }cout<<endl;
        
    }cout<<endl;
}