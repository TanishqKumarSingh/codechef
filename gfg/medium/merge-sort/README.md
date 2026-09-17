# Merge Sort

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array arr[], its starting position l and its ending position r. Sort the array using the merge sort algorithm.

 **Examples:** 

```
Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: We get the sorted array after using merge sort

```

```
Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Explanation: We get the sorted array after using merge sort 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T08:21:40.941Z  

```cpp
class Solution {
public:
    vector<int> C;

    void Merge(vector<int>& arr, int low, int mid, int high) {
        int i = low, j = mid + 1, k = low;

        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) {
                C[k] = arr[i];
                i++;
            } 
            else {
                C[k] = arr[j];
                j++;
            }
            k++;
        }

        while (i <= mid) {
            C[k] = arr[i];
            i++;
            k++;
        }

        while (j <= high) {
            C[k] = arr[j];
            j++;
            k++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = C[i];
        }
    }

    void MS(vector<int>& arr, int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;

            MS(arr, low, mid);
            MS(arr, mid + 1, high);

            Merge(arr, low, mid, high);
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        C.resize(arr.size());
        MS(arr, l, r);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/merge-sort/1)