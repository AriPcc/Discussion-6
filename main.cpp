/******************************************************************************
# Author:            Ari Pollack and Xavier Braker
# Lab:               Discussion 6
# Date:              May 17, 2025
# Description:       This program will read text from input and determine
                     whether it's a palindrome (identical in reverse)
# Input:             userPhrase (string)
# Output:            defaultPhrase (string), reversedPhrase (string),
                     userPhrase(string)
# Sources:           Discussion 6 specifications, zyBooks reference
#*****************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   // Declare variables for input and output
   string userPhrase = "";
   string defaultPhrase = "";
   string reversedPhrase = "";
   int length = 0;
   char index = ' ';

   // Get input from the user
   cout << "Enter a word or phrase (numbers allowed): ";
   getline(cin, userPhrase);
   length = userPhrase.length();
   cout << endl;

   // Remove capitalization, spaces, and special characters
   for (int i = 0; i < length; i++) {
      index = userPhrase.at(i);
      if (isalpha(index) || isdigit(index)) {
         defaultPhrase.push_back(tolower(index));
      }
   }
   length = defaultPhrase.length();

   // Create a reversed version
   for (int i = length - 1; i >= 0; i--) {
      index = defaultPhrase.at(i);
      reversedPhrase.push_back(index);
   }

   // Display the normal and reversed versions
   cout << "Standard: " << defaultPhrase << endl;
   cout << "Reversed: " << reversedPhrase;
   cout << endl << endl;

   // Display the result
   if (defaultPhrase == reversedPhrase) {
      cout << userPhrase << " is a palindrome!";
   }
   else {
      cout << userPhrase << " is not a palindrome.";
   }
   cout << endl;

   return 0;
}