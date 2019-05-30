#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int marks[]={23,5,76,39,66,74,18};

    for(int var:marks)
    {
        cout<<var<<endl;
    }
    cout<<"next loop"<<endl;
    for(int i:{61,75,77,40,27,16,8,33})
    {
        cout<<i<<endl;
    }

    return 0;
}
