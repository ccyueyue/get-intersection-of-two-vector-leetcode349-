#include<map>
#include<vector>
#include<iostream>
class Solution {// leetcode 350
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
		std::map<int, int> mp;
		for (int i = 0; i < nums1.size(); i++) {
			mp[nums1[i]]++;
		}
		std::vector<int> v;
		for (int i = 0; i < nums2.size(); i++) {
			if (mp[nums2[i]] > 0) {
				v.push_back(nums2[i]);
				mp[nums2[i]]--;
			}
		}
		return v;
    }
};
int main()
{
	int arr[] = { 0,1,2,3,4 };
	int arr1[] = { 0,0,0,1,1,2,3,4,4 };
	std::vector<int> num(arr, arr + 5);
	std::vector<int> num1(arr1, arr1 + 9);
	Solution s;
	std::vector<int> v1 = s.intersect(num, num1);
	for (int i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
	std::map<int, int> mp1;
	for (int i = 0; i < num.size(); i++) {
		mp1.insert(std::make_pair(num[i], 0));
	}


}