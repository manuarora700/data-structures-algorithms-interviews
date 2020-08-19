#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
// O(n) time | O(n) space
bool balancedBrackets(string str)
{
  string openingBrackets = "([{";
  string closingBrackets = ")]}";
  unordered_map<char, char> matchingBrackets{
      {')', '('}, {']', '['}, {'}', '{'}};
  vector<char> stack;
  for (char character : str)
  {
    if (openingBrackets.find(character) != string::npos)
    {
      stack.push_back(character);
    }
    else if (closingBrackets.find(character) != string::npos)
    {
      if (stack.size() == 0)
      {
        return false;
      }
      if (stack[stack.size() - 1] == matchingBrackets[character])
      {
        stack.pop_back();
      }
      else
      {
        return false;
      }
    }
  }
  return stack.size() == 0;
}