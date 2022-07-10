#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    char vardas[20];
    // establishes the needed variables(make the size of the char variable the amount of symbols you're gonna read)

    ifstream fd("duomenys.txt");
    fd >> n;
    // gets the loop count
    fd.ignore();
    // makes it so the next time it reads, it starts on a new line
    // IMPORTANT

    for (int i = 0; i < n; i++)
    {
        fd.get(vardas, 21);
        // the amount of digits it's reading must be 1 larger than what's plannned to read

        cout << vardas << endl;

        fd.ignore();
        // makes it so the next time it reads, it starts on a new line
        // IMPORTANT
    }
}