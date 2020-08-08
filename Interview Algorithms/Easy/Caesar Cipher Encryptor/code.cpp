#include <bits/stdc++.h>

using namespace std;

char getNewLetter(char letter, int key);
// O(n) time | O(n) space
string caesarCypherEncryptor(string str, int key)
{
  vector<char> newLetters;
  int newKey = key % 26;
  for (int i = 0; i < str.length(); i++)
  {
    newLetters.push_back(getNewLetter(str[i], newKey));
  }
  return string(newLetters.begin(), newLetters.end());
}
char getNewLetter(char letter, int key)
{
  int newLetterCode = letter + key;
  return newLetterCode <= 122 ? newLetterCode : 96 + newLetterCode % 1;
}