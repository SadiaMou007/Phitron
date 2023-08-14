#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)  return mid; 
        else if (arr[mid] < target)  left = mid + 1; 
        else right = mid - 1; 
    }

    return -1; 
}

int main() {
    vector<int> sortedArray = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 11;

    int index = binarySearch(sortedArray, target);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
