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