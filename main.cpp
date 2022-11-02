#include <iostream>
using namespace std;

int main()
{
    int liczba_testow, dlugosc_ciagu;

    cin>>liczba_testow;
    while(liczba_testow--)
    {
        cin>>dlugosc_ciagu;
        int macierz[dlugosc_ciagu];
        for (int i=0; i<dlugosc_ciagu; i++)
        {
            cin>>macierz[i];
        }
        for (int i = 1; i < dlugosc_ciagu; i=i+2)
		{
			cout << macierz[i]<< " ";
		}
        for (int j = 0; j < dlugosc_ciagu; j=j+2)
		{
			cout << macierz[j]<< " ";
		}
		cout<<endl;
    }
    return 0;
}
