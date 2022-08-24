#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    for (int c = 1; c < 500; c++)
    {
        for (int b = 1; b < 500; b++)
        {
            for (int a = 1; a < 500; a++)
            {
                if ((a > b && a > c) && ((pow(b, 2) + pow(c, 2)) == pow(a, 2)))
                {
                    cout << "-----------------------------------------------------------\n";
                    cout << "A=" << a << " | B=" << b << " | C=" << c << "\n\n";
                    cout << "            *\n";
                    cout << "           **\n";
                    cout << "   A=" << setfill(' ') << setw(3) << a << "  ***  B=" << b << "\n";
                    cout << "         ****\n";
                    cout << "        *****\n";
                    cout << "       ******\n";
                    cout << "        C=" << c << "\n\n";
                    cout << "B^2 + C^2 = A^2\n";
                    cout << b << "^2 + " << c << "^2 =" << a << "^2\n";
                    cout << pow(b, 2) << " + " << pow(c, 2) << " = " << pow(a, 2) << "\n";
                    cout << (pow(b, 2) + pow(c, 2)) << " = " << pow(a, 2) << "\n";
                }

                // si "b" es mayor que todos
                if ((b > a && b > c) && ((pow(a, 2) + pow(c, 2)) == pow(b, 2)))
                {
                    cout << "-----------------------------------------------------------\n";
                    cout << "A=" << a << " | B=" << b << " | C=" << c << "\n\n";
                    cout << "          *\n";
                    cout << "          **\n";
                    cout << "   A=" << setfill(' ') << setw(3) << a << "  ***  B=" << b << "\n";
                    cout << "          ****\n";
                    cout << "          *****\n";
                    cout << "          ******\n";
                    cout << "           C=" << c << "\n\n";
                    cout << "A^2 + C^2 = B^2\n";
                    cout << a << "^2 + " << c << "^2 =" << b << "^2\n";
                    cout << pow(a, 2) << " + " << pow(c, 2) << " = " << pow(b, 2) << "\n";
                    cout << (pow(a, 2) + pow(c, 2)) << " = " << pow(b, 2) << "\n";
                }
                // si "c" es mayor que todos
                if ((c > a && c > b) && ((pow(a, 2) + pow(b, 2)) == pow(c, 2)))
                {
                    cout << "-----------------------------------------------------------\n";
                    cout << "A=" << a << " | B=" << b << " | C=" << c << "\n\n";
                    cout << "              *\n";
                    cout << "             ***\n";
                    cout << "    A=" << setfill(' ') << setw(3) << a << "  *******  B=" << b << "\n";
                    cout << "         ***********\n";
                    cout << "       ***************\n";
                    cout << "     *******************\n";
                    cout << "             C=" << c << "\n\n";
                    cout << "A^2 + B^2 = C^2\n";
                    cout << a << "^2 + " << b << "^2 =" << c << "^2\n";
                    cout << pow(a, 2) << " + " << pow(b, 2) << " = " << pow(c, 2) << "\n";
                    cout << (pow(a, 2) + pow(b, 2)) << " = " << pow(c, 2) << "\n";
                }
            }
        }
    }
}