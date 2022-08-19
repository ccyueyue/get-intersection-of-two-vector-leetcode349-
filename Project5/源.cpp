#include<set>
#include<vector>
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		set<int> set1(nums1.begin(), nums1.end());
		set<int> set2(nums2.begin(), nums2.end());
		vector<int> v1;
		v1.resize(min(set1.size(), set2.size()));
		vector<int>::iterator vit = set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), v1.begin());
		vector<int> ret(v1.begin(), vit);
		return ret;
	}
};
class Solution {//第二种方法
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		set<int> set1(nums1.begin(), nums1.end());
		set<int> set2;
		for (auto num : nums2) {
			if (set1.find(num) != set1.end()) {
				set2.insert(num);
			}
		}
		vector<int> ret(set2.begin(), set2.end());
		return ret;
	}
};
int main()
{
	int arr[] = { 4,9,5 };
	int arr1[] = { 9,4,9,8,4 };
	std::vector<int> v1(arr,arr+3);
	vector<int> v2(arr1, arr1 + 5);
	//v1.resize(15);
	std::set<int> set1(v1.begin(),v1.end());
	for (auto set_mem : set1) {
		std::cout << set_mem << " ";
	}
	std::cout << std::endl;
	std::set<int> set2(v2.begin(), v2.end());
	for (auto set_mem : set2) {
		std::cout << set_mem << " ";
	}
	std::cout << std::endl;
	//vector<int> v2(set1.begin(), set1.end());
	vector<int> v4;
	v4.resize(min(set1.size(), set2.size()));
	for (auto set_mem : v4) {
		std::cout << set_mem << " ";
	}
	std::cout << std::endl;
	set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), v4.begin());
	for (auto set_mem : v4) {
		std::cout << set_mem << " ";
	}
	std::cout << std::endl;
	Solution s;
	vector<int> v3 = s.intersection(v1, v2);
	for (auto mem : v3) {
		std::cout << mem << " ";
	}
	std::cout << std::endl;
	return 0;
}