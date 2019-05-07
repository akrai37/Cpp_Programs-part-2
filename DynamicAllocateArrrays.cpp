#include<iostream>
#include<cstdlib>

using namespace std;

//best topic till now
int main()
{
    int *pointer;
    int input;

    cout<<"enter the no. of inputs : "<<endl;
    cin>>input;

    pointer=new int[input];

    int temp;
    int i;

    for(i=0; i<input; i++){

        cout<<"enter the item:"<<i+1<<endl;
        cin>>temp;
        *(pointer+i)=temp;
    };

    for(i=0; i<input; i++){

      cout<<"item - "<<*(pointer+i)<<endl;
    }

    delete pointer;
    /*in this program there was no need to dynamically allocate array but just for illustration purpose we did that.*/


 return  0;
}

