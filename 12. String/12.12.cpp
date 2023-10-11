/*
    12.12. Write a program that read any line of text and display number of vowels, consonants, digits, spaces and
       other characters
*/


#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int v_count, c_count, d_count, s_count;
    v_count = c_count = d_count = s_count = 0;

    cout << "Enter the string: ";
    cin.getline(str, sizeof(str));

    for (int i = 0; str[i]; ++i)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v_count++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            c_count++;
        }
        //digit
        else if(str[i] >= '0' && str[i] <= '9')
        {
            d_count++;
        }

        //space count
        else if(str[i] == ' ')
        {
            s_count++;
        }
    }
    cout << "\ntotal vowel: " << v_count <<endl;
    cout << "\ntotal consonant: " << c_count <<endl;
    cout << "\ntotal digit: " << d_count <<endl;
    cout << "\ntotal string space: " << s_count <<endl;
}
