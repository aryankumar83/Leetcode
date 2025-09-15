class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int x : nums) ++freq[x];

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] != freq[b]) return freq[a] < freq[b]; // smaller frequency first
            return a > b;                                     // if tie: larger value first
        });

        return nums;
    }
};