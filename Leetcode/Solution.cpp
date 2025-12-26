#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j)
        {
            if (numbers[i] + numbers[j] == target)
            {
                return {i + 1, j + 1};
            }
            else if (numbers[i] + numbers[j] >= target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {};
    }

    void segregate0and1(vector<int> &arr)
    {
        int left = 0;
        int right = arr.size() - 1;
        while (left < right)
        {
            while (arr[left] == 0 && left < right)
                left++;
            while (arr[right] == 1 && left < right)
                right--;
            if (left < right)
            {
                arr[left] = 0;
                arr[right] = 1;
                left++;
                right--;
            }
        }
    }

    void moveZeroes(vector<int> &nums)
    {
        int left = 0;
        int right = 0;
        while (right < nums.size())
        {
            if (right < nums.size() && nums[left] != 0)
            {
                left++;
                right++;
                continue;
            }
            while (right < nums.size() && nums[right] == 0)
            {
                right++;
            }
            if (right < nums.size() && nums[left] == 0 && nums[right] != 0)
            {
                nums[left] = nums[right];
                nums[right] = 0;
                right++;
                left++;
            }
        }
    }

    int removeDuplicates(vector<int> &nums)
    {
        int i = 1;
        int right = 1;

        while (right < nums.size())
        {
            if (nums[i] <= nums[i - 1])
            {
                while (right < nums.size() && nums[right] == nums[right - 1])
                {
                    right++;
                }
                if (right < nums.size())
                {
                    nums[i] = nums[right];
                    i++;
                    right++;
                }
            }
            else
            {
                i++;
                right++;
            }
        }
        return i;
    }

    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        int left = 0, right = n - 1, i = n - 1;
        vector<int> result = nums;
        while (left <= right)
        {
            if (abs(nums[left]) < abs(nums[right]))
            {
                result[i] = pow(nums[right], 2);
                right--;
                i--;
            }
            else
            {
                result[i] = pow(nums[left], 2);
                left++;
                i--;
            }
        }
        return result;
    }
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for (int i = 0; i < n - 2; i++)
        {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1, right = n - 1;

            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < 0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return result;
    }

    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = INT_MAX, result = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
            int right = n - 1;
            while (left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                {
                    return sum;
                }
                if (abs(sum - target) < abs(result - target))
                {
                    result = sum;
                    left++;
                }
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }
        return result;
    }
};

int main()
{
    int a[] = {-1, 2, 0, 1, -1, -4};

    return 0;
}