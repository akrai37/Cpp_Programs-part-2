#include<iostream>
#include<cstdlib>

using namespace std;
 union student{

 int age;
 float rollno;
 };

int main()
{
 student ankush,vk,pro;

 ankush.age=18;
 ankush.rollno=34.54;
 vk.age=18;
 pro.rollno=45.34;

 cout<<ankush.age<<endl;
 cout<<ankush.rollno<<endl;/*among ankush.age and ankush.rollno only one value will be printed .Rule of union since memory assigned
 to the datatype
 variable ankush or vk or pro are fixed unlike structure*/
 cout<<vk.age<<endl;
 cout<<pro.rollno<<endl;

 return 0;
}
