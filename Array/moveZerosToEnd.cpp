class Solution {
public:

    void swap(int* a, int* b) {
        int t = *a;
        *a = *b;
        *b = t;
    }

    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        if (n == 0 || n == 1)
            return;

        int lptr = 0, rptr = 1, i = 0;
        while (rptr < n) {

            if (nums[lptr] == 0 && nums[rptr] == 0) {
                rptr++;
            } else if (nums[lptr] == 0 && nums[rptr] != 0) {
                swap(&nums[lptr], &nums[rptr]);
                lptr++;
                rptr++;
            }
            else {
                lptr++;
                rptr++;
            }

        }
    }
};
