#include <bits/stdc++.h>

using namespace std;
int getNextIdx(int currentIdx, vector<int> array);
bool hasSingleCycle(vector<int> array)
{
  int numEleVisited = 0;
  int currentIdx = 0;

  while (numEleVisited < array.size())
  {
    if (numEleVisited > 0 && currentIdx == 0)
      return false;

    numEleVisited++;
    currentIdx = getNextIdx(currentIdx, array);
  }
}

int getNextIdx(int currentIdx, vector<int> array)
{
  int jump = array[currentIdx];
  int nextIdx = (currentIdx + jump) % (array.size());

  return nextIdx >= 0 ? nextIdx : nextIdx + array.size();
}