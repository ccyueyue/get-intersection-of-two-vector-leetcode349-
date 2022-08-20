class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {

        int res = 0;
        for (int i = 0; i < points.size(); i++) {
            unordered_map<int, int> mp;
            for (int j = 0; j < points.size(); j++) {
                if (i != j) {
                    int dis = (points[i][0] - points[j][0]) * (points[i][0] - points[j][0]) + (points[i][1] - points[j][1]) * (points[i][1] - points[j][1]);
                    mp[dis]++;
                }
            }
            for (auto mem : mp) {
                if (mem.second >= 2) {
                    res += (mem.second) * (mem.second - 1);
                }
            }
        }
        return res;
    }

    // private: // the memory using and time assuming is twice when using the distance function in private than directly caculate dis in numberOfBoomerangs
    //     int distance(const vector<int> point1, const vector<int> point2){
    //         return (point1[0]-point2[0])*(point1[0]-point2[0])+(point1[1]-point2[1])*(point1[1]-point2[1]);
        //}

};