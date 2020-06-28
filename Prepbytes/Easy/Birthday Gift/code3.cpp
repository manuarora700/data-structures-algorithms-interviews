#include <vector>
#include <algorithm>
using namespace std;
// O(nlog(n)) | O(1) space
vector<int> twoNumberSum(vector<int> array, int targetSum) {
    sort(array.begin(), array.end());
    int left = 0;
    int right = array.size() - 1;
    while (left < right) {
        int currentSum = array[left] + array[right];
        if (currentSum == targetSum) {
            return {array[left], array[right]};
        } else if (currentSum < targetSum) {
            left++;
        } else if (currentSum > targetSum) {
            right--;
        }
    }
    return {};
}