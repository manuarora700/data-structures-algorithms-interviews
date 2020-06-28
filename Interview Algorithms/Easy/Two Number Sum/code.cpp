// Approach 1: Two For loops

#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int target, int size);
int main() {
    int size;
    std::cin>>size;
    int arr[size];


    for(int i = 0; i < size; i++) {
        std::cin>>arr[i];
    }

    int target;
    std::cin>>target;

    solve(arr, target, size);
}

int solve(int arr[], int target, int size) {
    for(int i = 0; i < size; i++) {
        int firstNum = arr[i];
        for(int j = i+1; j < size; j++) {
            int secondNum = arr[j];
            if(firstNum + secondNum == target) {
                std::cout<<"Target found: "<<firstNum<<" "<<secondNum<<"\n";
            }
        }
    }
}