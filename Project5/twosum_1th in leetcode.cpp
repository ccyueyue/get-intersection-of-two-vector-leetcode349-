class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp1;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            auto mit1 = mp1.find(temp);
            if (mit1 != mp1.end()) {
                return vector<int> {i, mit1->second};
            }
            mp1.insert(make_pair(nums[i], i));
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> mp1;
        for (int i = 0; i < nums.size(); i++) {
            mp1.insert(make_pair(nums[i], i));
        }
        sort(nums.begin(), nums.end());
        vector<int> v1;
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int a = target - nums[left];
            if (a == nums[right]) {
                auto temp1 = mp1.find(nums[left]);
                int temp2 = temp1->second;
                mp1.erase(temp1);
                auto temp3 = mp1.find(nums[right]);
                v1.push_back(temp2);
                v1.push_back(temp3->second);
                break;
            }
            else if (a > nums[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return v1;
    }
};