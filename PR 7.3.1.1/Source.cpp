#include <iostream>
#include <iomanip>

using namespace std;

void Input(int** a, const int rowCount, const int colCount);
void Print(int** a, const int rowCount, const int colCount);
void New_Nomer(int** a, const int rowCount, const int colCount, int& num);


int main()
{
    int n;
    cout << "n = "; cin >> n;
    int rowCount = n, colCount = n;
    int** a = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new int[colCount];
    Input(a, rowCount, colCount);
    Print(a, rowCount, colCount);

    int num = 0;

    New_Nomer(a, rowCount, colCount, num);
    Print(a, rowCount, colCount);

    for (int i = 0; i < rowCount; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}




void Input(int** a, const int rowCount, const int colCount)
{
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }
}




void Print(int** a, const int rowCount, const int colCount)
{
    cout << endl;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << endl;
}





void New_Nomer(int** a, const int rowCount, const int colCount, int& num) 
{
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            if (a[i + 1][j] == a[i][j + 1]) {
                num = i;
            }
        }

    }
}