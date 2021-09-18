#include <iostream>
using namespace std;
int main()
{
    int A[10] = {0, 1, 2, 3, 4}, n = 5, x, place;
    //establishes all the elements
    //IMPORTANT that the array is bigger than the loop count

    for (int i = 0; i < n; i++)
        cout << A[i] << "   ";
    cout << "" << endl;
    //displays all the elements

    cout << "Which place do you want to insert it into" << endl;
    cin >> place;
    cout << "What do you want to insert" << endl;
    cin >> x;
    //establishes the variables

    n = n + 1;
    //makes 1 more loop so the theres space for the new element
    for (int i = n; i > place; i--) //IMPORTANT make sure i > place, not n and is i--, not ++
    {
        A[i] = A[i - 1];
        //pushes everything forwards to make an empty spot for the new element
    }
    A[place] = x;
    //fills the empty spot with the desired element

    for (int i = 0; i < n; i++)
        cout << A[i] << "   ";
    //displays all the elements again now with the new element
}