class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1)return stones[0];
        if(stones.size() == 2){
            if(stones[0] == stones[1])return 0;
            else return abs(stones[1] - stones[0]);
        }
        while(stones.size()>1){
            sort(stones.begin() , stones.end());
            if(stones[stones.size()-1] == stones[stones.size()-2] && stones[stones.size()-1] !=0 && stones[stones.size()-2] != 0){
                stones.erase(stones.end());
                stones.erase(stones.end());
            }
            else if(stones[stones.size()-1] > stones[stones.size()-2] && stones[stones.size()-1] !=0 && stones[stones.size()-2] != 0){
                stones[stones.size()-2] = stones[stones.size()-1] - stones[stones.size()-2];
                stones.erase(stones.end());
            }
        }
        if(stones.size() == 1)return stones[0];
        return 0;
    }
};