#include <iostream>
#include <string>
using namespace std;

// first prob variables
string val;
int yesno = 1;
bool loop = true;

int main()
{
    while (loop)
    {
        cin >> val;
        switch (yesno)
        {
        case 1:
            if (val == "spoon")
            {
                cout << "okay" << endl;
                loop = false;
            }
            else if (val != "spoon")
            {
                cout << "fork" << endl;
            }
            break;
        }
    }

    // second prob variables
    int one = 60;
    int two = 85;

    while (one < two)
    {
        two -= 5;

        cout << two << endl;
    }
}