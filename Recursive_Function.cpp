#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int factorial(int);

int main(){

        cout<< factorial(5) <<endl;

    return 0;

}

int factorial(int n){

    if (n==1){
        return 1;
        }
    else{
         return n * factorial(n-1);
    }
}


