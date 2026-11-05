class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for (int i = 0; i < arr1.size(); i++) {
            int low = 0;
            int high = arr2.size() - 1;
            bool valid = true;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (arr2[mid] >= arr1[i] - d) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            if (low == arr2.size() || arr2[low] > arr1[i] + d) {
                ans++;
            }
        }
        return ans;
    }
};