#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char col1[12], col2[12], col3[12];
    // input section
    scanf("%s", col1);
    scanf("%s", col2);
    scanf("%s", col3);
    // first column if
    if (col1[0] == 'v')
    {
        // secon col2
        if (col2[0] == 'a')
        {
            if (col3[0] == 'c')
            {
                cout << "aguia" << endl;
            }
            // secon col2
            else if (col3[0] == 'o')
            {
                cout << "pomba" << endl;
            }
        }
        // secon col2
        else if (col2[0] == 'm')
        {
            if (col3[0] == 'o')
            {
                cout << "homem" << endl;
            }
            // secon col2
            else if (col3[0] == 'h')
            {
                cout << "vaca" << endl;
            }
        }
    }
    // first column 2 element
    if (col1[0] == 'i')
    {
        // secon col2
        if (col2[0] == 'i')
        {
            if (col3[2] == 'm')
            {
                cout << "pulga" << endl;
            }
            // secon col2
            else if (col3[2] == 'r')
            {
                cout << "lagarta" << endl;
            }
        }
        // secon col2
        else if (col2[0] == 'a')
        {
            if (col3[0] == 'h')
            {
                cout << "sanguessuga" << endl;
            }
            // secon col2
            else if (col3[0] == 'o')
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}