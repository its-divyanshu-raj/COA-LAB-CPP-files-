// question 1 - bit wise operators 
#include <iostream>
using namespace std;

int main() {
    int x , y;
    cin>>x,y;

    cout<<"BITWISE AND" << (x&y) << endl;
    cout<<"BITWISE OR" << (x|y) <<endl;
    cout<<"BITWIESE XOR" <<(x^y) <<endl;
    cout<<"BITWISE NOT" <<(x~y) <<endl;
    cout<<endl;

    cout<<"BITWISE leftshift ->x"<<(x<<2)<<endl;
    cout<<"BITWISE leftshift ->y"<<(y<<2)<<endl;
    cout<<endl;

    cout<<"BITWISE rightshift ->x"<<(x>>2)<<endl;
    cout<<"BITWISE rightshift ->y"<<(y>>2)<<endl;
    cout<<endl;

    cout<<"BITWISE NOT -> x"<< (~x)<<endl;
    cout<<"BITWISE NOT -> Y:"<<(~Y)<<endl;
    cout<<endl;

    return 0;
}

// Q2 Sum of bits 

#include <iostream>
#include<math.h>


using namespace std;

int main ()
{
    int n ;
    cin >> n ; 

    int bits[n];

    for(int i = 0 ;i <n ;i++)
    {
        cin >> bits[i];

    }


    int ans = 0 ;
    int sum = 0 ;

    for(int i = 0 ; i<n ; i++)
    {
        if(bits[i] == 0 )
        {
            continue;
        }
        else if (bits[i] == 1)
        {
            ans = bits[i] * pow(2,n-i-1);
            sum = ans + sum ;
        }
    }

    cout << sum << endl;



}
