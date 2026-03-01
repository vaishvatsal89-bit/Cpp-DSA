class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;
        int n = nums.size();

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // If only one element
            if (n == 1) return nums[0];

            // Boundary cases
            if (mid == 0) {
                if (nums[0] != nums[1]) return nums[0];
                else return nums[1];
            }

            if (mid == n - 1) {
                if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
                else return nums[n - 2];
            }

            // If mid is the single element
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];

            // Even index
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid + 1])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
            // Odd index
            else {
                if (nums[mid] == nums[mid - 1])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};