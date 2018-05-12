#include<iostream>
using namespace std;

inline int fun();

int main()
{
    fun();
    return 0;
}
int fun()
{
    cout << "I am from inline function "<<endl;
    return 0;
}
