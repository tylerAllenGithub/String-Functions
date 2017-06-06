#include <fstream>
#include <iostream>
using namespace std;
#include "Class1.h"


int main()
{
Class1 class1;

    class1.printFromFile("data.txt");
    string toBeReversed = "Bob Ross";

    cout<<"The reverse of "<<toBeReversed<<" is: "<<class1.reverseString(toBeReversed)<<endl;

    string pigLatin = "banana";
    cout<<"The pig latin version of "<<pigLatin<< " is: "<<class1.getPigLatin(pigLatin)<<endl;

    string vowelsToBeCounted ="a b c d e f g h i j k l m n o p q r s t u v w x y z";
    cout<<"There are "<<class1.countVowels(vowelsToBeCounted)<< " vowels in "<< vowelsToBeCounted<<endl;

    string potentialPalindrome = "rats live on no evil star";
    if(class1.isPalindrome(potentialPalindrome))
    {
        cout<<"Yes, " + potentialPalindrome + " is a palindrome."<<endl;
    }
    else
    cout<<"No, " + potentialPalindrome + " is not a palindrome."<<endl;

    string testCountWords = "  I    am    a   very   lousy  programmer. ";
    cout<<"There are : " << class1.countWordsInAString(testCountWords)<<" words in the string " << testCountWords<<endl;



        return 0;
}

