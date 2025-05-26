#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform bucket sort
void bucketSort(float arr[], int n) {
    // Create n empty buckets
    vector<float> buckets[n];

    // Put array elements into different buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i]; // Bucket index
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < n; i++)
        sort(buckets[i].begin(), buckets[i].end());

    // Concatenate all sorted buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < buckets[i].size(); j++)
            arr[index++] = buckets[i][j];
}

void printArray(float arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.123, 0.665, 0.343};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
