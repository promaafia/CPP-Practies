/*
	12.13. Write a program that read a line of text and displays the frequency of every character
*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char text[100];
	int s_freq[26];
	int c_freq[26];

	for (int i = 0; i < 26; ++i) {
		s_freq[i] = 0;
		c_freq[i] = 0;
	}

	cout << "enter the text: ";
	cin.getline(text, sizeof(text));


	// counting the frequency
	for (int i = 0; text[i]; ++i) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			int s_index = (int) text[i] - 'a';
			s_freq[s_index]++;
		}
		else if (text[i] >= 'A' && text[i] <= 'Z') {
			int c_index = (int) text[i] - 'A';
			c_freq[c_index]++;
		}
	}

	cout << endl;

	// showing the frequency
	for (int i = 0; i < 26; ++i) {
		if (s_freq[i] > 0) {
			cout << "frequency of " << (char) (i + 'a') << " - " << s_freq[i] << endl;
			}
		if (c_freq[i] > 0) {
			cout << "frequency of " << (char) (i + 'A') << " - " << c_freq[i] << endl;
		}

	}

	return 0;
}
