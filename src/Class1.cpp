#ifndef CLASS1_C
#define CLASS1_C


#include <iostream>
using namespace std;
#include <fstream>
#include "Class1.h"


bool Class1::printFromFile(string fileName)
{
    ifstream fin;
    fin.open(fileName.data());
    if(!fin)//if infile(fin) could not be opened
    {
      cout<<"Error Printing";//output Error Printing to screen
      return false;//return failure (false)
    }
    string input;
    ofstream fout;
    fout.open("Output File", ios::app);

    while(fin>>input)
    {
        fout<<input<<endl;

    }
    return true;
}

string Class1::reverseString(string a)
{
    if(a.size()==0)
    {
    return NULL;
    }
    int j =a.size()-1;
    char temp;

 for(int i=0;i<j;i++)
 {
     temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    j--;
 }
 return a;
}

string Class1::getPigLatin(string s)
{
   char firstLetter = s[0];
    s.erase(0,1);
    return (s+firstLetter+"ay");
}

int Class1::countVowels(string s)
{
    int count =0;
    for(int i = 0; i<s.size();i++)
    {
        switch(s[i])
        {
         case 'a':    count++;
         break;

         case 'e':    count++;
         break;

         case 'i':    count++;
         break;

         case 'o':    count++;
         break;

         case 'u':    count++;
         break;

         case 'y':    count++;
         break;
        }
    }
    return count;
}

bool Class1::isPalindrome(string s)
{
    if(s.compare(reverseString(s))!=0)
    {
        return false;
    }

return true;
}

int Class1::countWordsInAString(string s)
{
    if(s.size()==0)
    return 0;

    else if(s.size()==1)
    return 1;

    int count = 0;
    int prev = 0;
    for(int i = 1; i<s.size();i++)
    {
     if(s[i] == ' ' && s[prev]!=' ')
     count++;
     prev++;
    }
    //if(s[0] == ' ')
    //count--;
    if(s[s.size()-1] != ' ')
    count++;
    return count;
}


#endif
