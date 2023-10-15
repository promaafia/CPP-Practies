/*
    12.11. Write a program that read any line of text and display number of uppercase, lowercase, digits, spaces and
       other characters
*/


#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int count, ucount, lcount, dcount, scount;
    count = ucount = lcount = dcount = scount = 0;
    cout << "Enter the string: ";
    cin.getline(str, sizeof(str));

    for (int i = 0; str[i]; ++i)
    {
        //total character
        count++;

        //lowerrcase count
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            lcount++;
        }

        //uppercase count
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ucount++;
        }

        //digit
        else if(str[i] >= '0' && str[i] <= '9')
        {
            dcount++;
        }

        //space count
        else if(str[i] == ' ')
        {
            scount++;
        }
    }
    cout << "\ntotal character: " << count <<endl << endl;
    cout << "lowercase: " << lcount << endl << endl;
    cout << "uppercase: " << ucount << endl << endl;
    cout << "\ntotal digit: " << dcount <<endl;
    cout << "\ntotal string space: " << scount <<endl;

    return 0;
}
