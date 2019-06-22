#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
int a,b,c;
cin >>a>>b;

try{
if(b==0)
    throw("divide by zero error");//whatever is after "throw" is the object that will be thrown to the catch and has particular datatype.
c=a/b;
cout<<c<<endl;
}
catch( const char *e){//e is the object thrown by the "throw" and catch by "catch".
cout<<"exception occured"<<endl<<e;//why e is printing the value rather than the address? That's because "e" is a pointer to a const character array, and on using cout << e; it will print the characters till it encounters the null character.
//if you used cout << *e; then it will print only the first character e points to. Get more info on this concept.
};
}
