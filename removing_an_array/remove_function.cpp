//for code explanation refer to "remove.cpp"
#include <iostream>
using namespace std;
void print(int &n, int A[]);
void remove(int &n, int A[]);
int main()
{
    int A[5] = {0, 1, 2, 3, 4}, n = 5;
    print(n, A);
    remove(n, A);
    print(n, A);
}
void print(int &n, int A[])
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "" << endl;
}
void remove(int &n, int A[])
{
    int remove;
    cout << "Which element do you want to remove " << endl;
    cin >> remove;
    for (int i = remove; i < n; i++)
    {
        A[i] = A[i + 1];
    }
    n = n - 1;
}
