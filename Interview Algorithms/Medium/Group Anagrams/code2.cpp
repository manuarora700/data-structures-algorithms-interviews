#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
using namespace std;
// O(w * n * log(n)) time | O(wn) space - where w is the number of words and n
// is the length of the longest word
vector<vector<string>> groupAnagrams(vector<string> words)
{
  unordered_map<string, vector<string>> anagrams;
  for (auto word : words)
  {
    string sortedWord = word;
    sort(sortedWord.begin(), sortedWord.end());
    if (anagrams.find(sortedWord) != anagrams.end())
    {
      anagrams[sortedWord].push_back(word);
    }
    else
    {
      anagrams[sortedWord] = vector<string>{word};
    }
  }
  vector<vector<string>> output = {};
  for (auto it : anagrams)
  {
    output.push_back(it.second);
  }
  return output;
}