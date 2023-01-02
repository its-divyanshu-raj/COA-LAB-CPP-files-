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



