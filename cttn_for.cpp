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

    // inisialisasi, kondisi, iterasi
    // for (tanpa nested)
    // for (int a = x; a <= 10; a++)
    // {
    //     cout << a << endl;
    // }

    for ( int i = x; i <=5; i++) //kolom
    {
        for (int j = y; j <=5; j++) //baris
        {
            cout << "* ";
        }
        cout << endl;
    }
}