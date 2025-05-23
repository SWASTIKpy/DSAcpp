// hashing used
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int S = nums.size() + 1;            // Step 1
    vector<int> hash(S, 0);             // Step 2

    for(int i = 0; i < nums.size(); i++){   // Step 3
        hash[nums[i]]++;                   // Step 4
    }

    for(int i = 0; i < S; i++){            // Step 5
        if (hash[i] > nums.size() / 2) {   // Step 6
            return i;                      // Step 7
        }
    }

        return -1;  // fallback in case no majority element
    }
};

// with STL

#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> count;

    for (int num : nums) {
        count[num]++;
        if (count[num] > nums.size() / 2)
            return num;
    }

    return -1; // fallback (won't be needed if majority always exists)
}

