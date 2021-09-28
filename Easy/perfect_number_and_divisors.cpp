#include <iostream>
using namespace std;

// Perfect Numbers are integers that are equal to the sum of all its divisors except that number itself.
int main(){

    int allinputs,input,divisor,sum;
    cin >> allinputs;
    if(allinputs<=10){

        for(int i=1;i<=allinputs;i++)
        {

            cin>>input;
            if(input<=100)
            {
                for (int j=1;j<input;j++)
                {
                if (input%j==0)
                {
                    sum=sum+j;
                }
                
            }
            if(sum==input)
                return 1;
            else
                return 0;

            }
            
        }
    }
}
