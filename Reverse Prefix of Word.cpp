#include <iostream>
#include <string>   
#include <algorithm>

using namespace std;



string reversePrefix(string word, char ch) {
	int index = 0;
	string prefix = "";
	for (size_t i = 0; i < word.length(); i++)
	{
		if (word.at(i) == ch) {
			index = i+1;
			break;
		}
	}
	for (size_t j = 0; j < (index/2); j++)
	{
		swap(word[j], word[index - j - 1]);
	}
	return word;
}

int main()
{
	std::string word = "";
	char ch;
	std::cout << "Please enter your string and character: ";
	std::cin >> word;
	std::cin >> ch;
	std::cout << reversePrefix(word,ch);
}
