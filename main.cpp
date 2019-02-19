#include <iostream>
#include <string>
#include <cstdbool>
using namespace std;

void isPunctuation();
char toUpperCase(char value);
int main()
{
 char letter;
 cout << "Enter a lowercase letter: ";
 cin >> letter;
 letter = toUpperCase(letter);
 cout << letter << endl;
}
char toUpperCase(char value)
{
 //char letter;
 //cout << "Plug in an uppercase character";
   //cin >> letter;
     if(islower(value));
       {
           value = toupper(value);
           //cout << value << "\n";

         return value;
       }
 }
