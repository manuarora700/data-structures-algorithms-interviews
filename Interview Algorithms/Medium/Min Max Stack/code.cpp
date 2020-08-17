#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class MinMaxStack
{
public:
  vector<unordered_map<string, int>> minMaxStack = {};
  vector<int> stack = {};
  // O(1) time | O(1) space
  int peek() { return stack[stack.size() - 1]; }
  // O(1) time | O(1) space
  int pop()
  {
    minMaxStack.pop_back();
    int result = stack[stack.size() - 1];
    stack.pop_back();
    return result;
  }
  // O(1) time | O(1) space
  void push(int number)
  {
    unordered_map<string, int> newMinMax = {{"min", number}, {"max", number}};
    if (minMaxStack.size())
    {
      unordered_map<string, int> lastMinMax =
          minMaxStack[minMaxStack.size() - 1];
      newMinMax["min"] = min(lastMinMax["min"], number);
      newMinMax["max"] = max(lastMinMax["max"], number);
    }
    minMaxStack.push_back(newMinMax);
    stack.push_back(number);
  }
  // O(1) time | O(1) space
  int getMin() { return minMaxStack[minMaxStack.size() - 1]["min"]; }
  // O(1) time | O(1) space
  int getMax() { return minMaxStack[minMaxStack.size() - 1]["max"]; }
};