#include "sample_data.cpp"
int calculateDifference(const std::string& s1, const std::string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    std::vector<std::vector<int>> dp(len1 + 1, std::vector<int>(len2 + 1, 0));

    for (int i = 0; i <= len1; ++i) {
        for (int j = 0; j <= len2; ++j) {
            if (i == 0) {
                dp[i][j] = j;
            } else if (j == 0) {
                dp[i][j] = i;
            } else if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + std::min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
    }

    return dp[len1][len2];
}

Book closestObject(std::vector<Book>& arr, const std::string& target) {
    int closestIndex = -1;
    int minDifference = std::numeric_limits<int>::max();

    for (size_t i = 0; i < arr.size(); ++i) {
        int difference = calculateDifference(arr[i].name, target);

        if (difference < minDifference) {
            minDifference = difference;
            closestIndex = i;
        }
    }

    if (closestIndex != -1) {
        return arr[closestIndex];
    }

    // If no close match found, return an empty book object
    return Book{};
}