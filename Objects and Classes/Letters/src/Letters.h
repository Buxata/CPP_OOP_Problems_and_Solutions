#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
#include <set>

typedef std::set<std::string> Words;

// This is a little helper class I have created, in order to call some 
// that are probably implemented better in a library, that I don't know of.
// Currently I do not belive I use it for anything, but I decided to keep it.
class Helper
{
public:
    void removePunctuation(std::string &text)
    {
        size_t count = text.length();
        for (size_t i = 0; i < count; i++)
        {
            text[i] = isalpha(text[i]) ? text[i] : ' ';
        }
    }
    bool checkWord(std::string &word, char c)
    {
        size_t count = word.length();
        if (isupper(c))
            c = tolower(c);
        for (size_t i = 0; i < count; i++)
        {
            char token = word[i];
            if (isupper(token))
                token = tolower(token);
            if (token == c)
                return true;
        }
        return false;
    }
    void printWords(Words words)
    {
        if (words.size() > 0)
        {
            auto stopper = words.end();
            for (auto i = words.begin(); i != stopper; i++)
            {
                std::cout << *i << ' ';
            }
            std::cout << "\n";
        }
    }
};
Helper helper;

class Letters
{

public:
    bool readAndOutput(char token) {

// In the tas kwe have to ignore cases. So I am taking the char to which I am comparing to and
// getting both the lower and upper values.
        bool output = false;
        char tokenConv = ' ';
        if (islower(token)) tokenConv = toupper(token);
        if (isupper(token)) tokenConv = tolower(token);

        for (auto word : words) {

// There are two comparisons which are performed on each cycle. 
// This can definitely be optimised if I force everithing tobe compared in lowercase.
            for (auto it = word.begin(); it != word.end(); it++) {
                if (token == *it || tokenConv == *it) {
                    std::cout << word << ' ';
                    output = true;
                    break;
                }
            }
        }
	    return output;
    }

// just colleting the input.
    void getInput()
    {
        std::string input;
        getline(std::cin, input);

        for (auto it = input.begin(); it != input.end(); it++) {
            if (ispunct(*it)) *it = ' ';
        }

        std::stringstream str(input);

        std::string token;
        Words output;
        while (str >> token)
        {
            output.insert(token);
        }

        this->words = output;
    }


private:
    Words words;
    char letterCheck;
};
