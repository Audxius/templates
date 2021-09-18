//for code explanation refer to "sort.cpp"
#include <iostream>
using namespace std;
void print(int &n, int A[]);
void sort(int &n, int A[]);
int main()
{
    int A[10] = {0, 9, 1, 8, 2, 7, 3, 6, 4, 5}, n = 10;
    print(n, A);
    sort(n, A);
    print(n, A);
}
void print(int &n, int A[])
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "" << endl;
}
void sort(int &n, int A[])
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] < A[j])
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}