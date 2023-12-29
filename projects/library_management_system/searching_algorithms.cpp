#include "sample_data.cpp"
Book closestObject(vector<Book>& arr, string target) {
    int left = 0;
    int right = arr.size() - 1;
    int closestIndex = -1; // To store index of closest match

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Update closestIndex if found a closer match
        if (closestIndex == -1 || abs((int)(arr[mid].name.length() - target.length())) < abs((int)(arr[closestIndex].name.length() - target.length()))) {
            closestIndex = mid;
        }

        // Check if target is present at mid
        if (arr[mid].name == target) {
            return arr[mid]; // Return the object matching the target name
        }
        // If target is greater, update left pointer
        else if (arr[mid].name < target) {
            left = mid + 1;
        }
        // If target is smaller, update right pointer
        else {
            right = mid - 1;
        }
    }

    // Return the closest matching object found
    return arr[closestIndex];
}