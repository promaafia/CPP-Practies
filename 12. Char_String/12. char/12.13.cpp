/*
	12.13. Write a program that read a line of text and displays the frequency of every character
*/


#include <iostream>
using namespace std;

void toLower(char text[]) {
	for (int i = 0; text[i]; ++i) {
		if (text[i] >= 'A' && text[i] <= 'Z') {
			text[i] = text[i] + 32;
		}
	}
}

int main(int argc, char const *argv[])
{
	char text[100];
	int freq[26];

	// init frequency array
	for (int i = 0; i < 26; ++i) {
		freq[i] = 0;
	}

	// input the string
	cout << "enter the text" << endl;
	cin.getline(text, sizeof(text));

	/*
		making the all letters in lower case(if the user input
		uppercase by any chance)
	*/
	toLower(text);

	// counting the frequency
	for (int i = 0; text[i]; ++i) {
		// only consider the letters
		if (text[i] >= 'a' && text[i] <= 'z') {
			// (int) text[i] - 'a' - this is for converting char to int
			// this technique is called mapping
			// 'a' - 'a' = 0
			// 'b' - 'a' = 1
			// 'c' - 'a' = 2
			// 'z' - 'a' = 25
			// so it maps to 26 sized int array easily
			int index = (int) text[i] - 'a';
			freq[index]++;
		}
	}

	cout << endl;

	// showing the frequency
	for (int i = 0; i < 26; ++i) {
		// (char) (i + 'a') - this is for converting int to char
		// this technique is called mapping
		// 0 + 'a' = 'a'
		// 1 + 'a' = 'b'
		// 2 + 'a' = 'c'
		// 25 + 'a' = 'z'
		if (freq[i] > 0) {
			cout << "frequency of " << (char) (i + 'a') << " - " << freq[i] << endl;
		}
	}

	return 0;
}
