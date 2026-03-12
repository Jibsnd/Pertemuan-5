#include <iostream>
using namespace std;

int main() 
{
    system("cls");
    // goto a;
    // b:
    // cout << "Ilmu ";
    // goto c;
    // a:
    // cout << "Laboratorium ";
    // goto b;
    // c:
    // cout << "Komputer";
    // d:
    
    int a = 1;

    inkremen :
    cout << a << endl;
    a++;

    if ( a <= 10)
    {
        goto inkremen;
    }
}