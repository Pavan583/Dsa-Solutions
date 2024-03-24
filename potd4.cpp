// 287. Find the Duplicate Number
// ! Floyd's Cycle Detection | | Slow-Fast Pointer
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // slow fast algorithm

        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];

        // Detect cycle
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = nums[0];

        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};