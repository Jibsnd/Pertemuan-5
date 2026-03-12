#include <iostream>
using namespace std;
int main ()
{
    system ("cls"); 
    
    int x, y;
    cout << "input kolom: ";
    cin >> x;
    cout << "input baris: ";
    cin >> y;

    for ( int i = x; i <=5; i++) //kolom
    {
        for (int j = y; j <=5; j++) //baris
        {
            cout << "* ";
        }
        cout << endl;
    }
}