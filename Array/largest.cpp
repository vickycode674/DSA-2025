int largestRecursive(vector<int>& arr, int n) {
    // Base case: If there's only one element, it's the largest
    if (n == 1) {
        return arr[0];
    }
    // Recursively find the largest in the remaining array
    int maxInRest = largestRecursive(arr, n - 1);
    // Return the larger of the current element and the max in the rest
    return max(arr[n - 1], maxInRest);
}



int largestRecursive(vector<int>& arr, int n) {
    // Base case: If there's only one element, it's the largest
    if (n == 1) {
        return arr[0];
    }
    // Recursively find the largest in the remaining array
    int maxInRest = largestRecursive(arr, n - 1);
    // Return the larger of the current element and the max in the rest
    return max(arr[n - 1], maxInRest);
}
