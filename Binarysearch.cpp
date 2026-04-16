#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya arrayn(maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
       
    }



int main ()
{
    
}