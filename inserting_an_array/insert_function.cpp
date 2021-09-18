#include <iostream>
using namespace std;
void print(int &n, int A[]);
void insert(int &n, int A[]);
int main()
{
    int A[6] = {0, 1, 2, 3, 4}, n = 5;
    print(n, A);
    insert(n, A);
    print(n, A);
}
void print(int &n, int A[])
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "" << endl;
}
void insert(int &n, int A[])
{
    int place, x;
    cout << "in which place do you want to insert a variable" << endl;
    cin >> place;
    cout << "What do you want to insert" << endl;
    cin >> x;
    n = n + 1;
    for (int i = n; i > place; i--)
    {
        A[i] = A[i - 1];
    }
    A[place] = x;
}