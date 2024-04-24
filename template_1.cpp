//Template is generic blueprint
//here i have written sample program for template. single function for all datatypes


#include<iostream>
using namespace std;
/*
int sum(int a, int b)
{
    return a+ b;
}

double sum(double a, int b)
{
    return a+b;
}

string add(string a, string b)
{
    return a + b;
}
*/

template<class T1, class T2>
auto add(T1 a, T2 b) //=> decltype (a + b) //trailing return type // c++17 removed
{
    return a+ b;
}

int main()
{
    cout<<"Result: "<<add(6.3,6.3)<<std::endl;
    string a = "abc";
    string b = "def";
    cout<<"Result: "<< add(a,b);
   // cout<<"Result: " <<add();   
    
    return 0;
}
