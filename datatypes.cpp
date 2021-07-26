#include<iostream>
using namespace std;

int main()
{
    int a;
    a = 12;

    cout << "size of int "<< a <<" "<< sizeof(a) << endl;

    float b = 16.989;
    cout << "size of float "<< b << " " << sizeof(b) << endl;

    char ch = 'A';
    cout << "size of char "<< ch << " " <<sizeof(ch) << endl;

    bool d;
    cout << "size of bool " <<sizeof(d) << endl;

    return 0;   
}