#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Marks{
int subjects[3];
public:
    Marks(int sub1,int sub2,int sub3){
       subjects[0]=sub1;
       subjects[1]=sub2;
       subjects[2]=sub3;
    }
    int operator[](int position){
       return subjects[position];
    }
 };

int main(){

Marks aman(23,54,56);

cout<<aman[0]<<endl;//we are making the array descriptor("[]") to work with or assigning it with the object of the class.
cout<<aman[1]<<endl;
cout<<aman[2]<<endl;

return 0;//we cannot use friend function for special operators like array descriptor.
}

