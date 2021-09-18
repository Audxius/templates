#include <iostream>
using namespace std;
int main()
{
    int A[5] = {0, 1, 2, 3, 4}, n = 5, remove;
    //establishes all the elements

    for (int i = 0; i < n; i++)
        cout << A[i] << "   ";
    cout << "" << endl;
    //displays all the elements in an array

    cout << "which one o you want to remove?" << endl;
    cin >> remove;
    //pick which one you want removes

    for (int i = remove; i < n; i++)
    {
        A[i] = A[i + 1];
        //pushes everything back by 1 to fill the space of the remove
    }
    n = n - 1;
    //removes the last cycle, because theres 1 less element now

    for (int i = 0; i < n; i++)
        cout << A[i] << "   ";
    //displays all the elements again, but now without the removed element
}