#include <iostream>

using namespace std;

int main()
{
    int heigth, line = 1;

    cout << "Digite a altura: ";
    cin >> heigth;

    cout << "A." << endl << endl;
    for (int i = 0; i < heigth; i++)
    {
        for (int j = 0; j < heigth; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "B." << endl << endl;

    for (int i = 0; i < heigth; i++)
    {
        for (int j = 0; j < line; j++)
        {
            cout << "* ";
        }
        cout << endl;
        line++;
    }
    
    cout << endl;
    cout << "C." << endl << endl;

    for (int i = 0; i < heigth; i++)
    {
        for (int j = 0; j < heigth; j++)
        {
            if (i == 0 || i == heigth - 1 || j == heigth - 1 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}