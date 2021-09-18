#include <iostream>
using namespace std;
int main()
{
    int A[10] = {0, 2, 1, 3, 4, 6, 5, 7, 9, 8}, n = 10;
    //establishes all the elements

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "" << endl;
    //displays all the elements

    int temp;
    //establishes a temporary variable
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[j] > A[i]) //'>' sorts from lowest to highest, use '<' to sort from highest to lowest
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
            //compares values and switches them places if needed
        }
    }
    //2 loops are used to compare numbers with different indexes within the same array

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    //displays all the elements after sorting
}