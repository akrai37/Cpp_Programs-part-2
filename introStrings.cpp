#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){

    string firstname="Peter";
    string lastname="Stuart";

    string name=firstname+ " " + lastname;

    cout<<firstname<<endl<<lastname<<endl<<name<<endl;

    if(firstname=="Peter")
    {
        cout<<"name matched"<<endl;
    }
    else{
        cout<<"no match"<<endl;
    }

    return 0;

}
