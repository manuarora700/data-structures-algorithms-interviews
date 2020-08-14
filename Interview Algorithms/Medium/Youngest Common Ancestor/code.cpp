#include <bits/stdc++.h>

using namespace std;

class AncestralTree
{
public:
  char name;
  AncestralTree *ancestor;

  AncestralTree(char name)
  {
    this->name = name;
    this->ancestor = NULL;
  }
  void addAsAncestor(vector<AncestralTree *> descendants);
};

int getDescendantDepth(AncestralTree *descendant, AncestralTree *topAncestor);
AncestralTree *backtrackAncestralTree(AncestralTree *lowerDescendant,
                                      AncestralTree *higherDescendant,
                                      int diff);

AncestralTree *getYoungestDescendant(AncestralTree *topAncestor, AncestralTree *descendantOne, AncestralTree *descendantTwo)
{
  int depthOne = getDescendantDepth(descendantOne, topAncestor);
  int depthTwo = getDescendantDepth(descendantTwo, topAncestor);

  if (depthOne > depthTwo)
  {
    return backtrackAncestralTree(descendantOne, descendantTwo, depthOne - depthTwo);
  }
  else
  {
    return backtrackAncestralTree(descendantTwo, descendantOne, depthTwo - depthOne);
  }
}

int getDescendantDepth(AncestralTree *descendant, AncestralTree *topAncestor)
{
  int depth = 0;

  while (descendant != topAncestor)
  {
    depth++;
    descendant = descendant->ancestor;
  }
  return depth;
}

AncestralTree *backtrackAncestralTree(AncestralTree *lowerDescendant,
                                      AncestralTree *higherDescendant,
                                      int diff)
{
  while (diff > 0)
  {
    lowerDescendant = lowerDescendant->ancestor;

    diff--;
  }

  while (lowerDescendant != higherDescendant)
  {
    lowerDescendant = lowerDescendant->ancestor;
    higherDescendant = higherDescendant->ancestor;
  }
  return lowerDescendant;
}