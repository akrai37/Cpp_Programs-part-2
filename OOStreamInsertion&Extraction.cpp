#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
string name;
int age;

 public:
      Person(){
     name="noname";
     age=0;
     };

     friend ostream &operator<<(ostream &output,Person &p);//prototyping the insertion operator with friend keyword ,its datatype and with required arguments.
     friend istream &operator>>(istream &input,Person &p);//prototyping the extraction operator with friend keyword,its datatype and with required arguments.
};
    ostream &operator<<(ostream &output,Person &p){
     output<<"what the hack"<<endl;
     output<<"my name is "<<p.name<<" and my age is "<<p.age<<endl;
     return output;
     };

     istream &operator>>(istream &input,Person &p){
     input>>p.name>>p.age;
     return  input;
     };

     int main(){

     cout<<"enter the name and age"<<endl;
     Person ankush;
     cin>>ankush;//it will call the "stream extraction operator fn" present in the class Person having object "ankush".
     cout<<ankush;//it will call the "stream insertion operator fn" present in the class Person having object "ankush".



     return 0;
     }


