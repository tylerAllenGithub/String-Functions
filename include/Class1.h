#ifndef CLASS1_H
#define CLASS1_H

#include <string>

class Class1
{
    public:
        Class1(){};
        bool printFromFile(std::string fileName);
        string reverseString(string a);
        string getPigLatin(string s);
        int countVowels(string s);
        bool isPalindrome(string s);
        int countWordsInAString(string s);
        virtual ~Class1(){};
    protected:
    private:
};

#endif // CLASS1_H
