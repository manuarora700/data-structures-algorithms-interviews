#include <bits/stdc++.h>

#include <vector>
#include <numeric>
using namespace std;
char getNewLetter(char letter, int key, string alphabet);
// O(n) time | O(n) space
string caesarCypherEncryptor(string str, int key)
{
  vector<char> newLetters;
  int newKey = key % 26;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < str.length(); i++)
  {
    newLetters.push_back(getNewLetter(str[i], newKey, alphabet));
  }
  return string(newLetters.begin(), newLetters.end());
}
char getNewLetter(char letter, int key, string alphabet)
{
  int newLetterCode = alphabet.find(letter) + key;
  return newLetterCode <= 25 ? alphabet[newLetterCode]
                             : alphabet[-1 + newLetterCode % 25];
}