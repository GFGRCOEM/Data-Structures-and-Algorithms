class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        unordered_set<int> set;
        for(int num : n){
            set.insert(num);
        }
        int lcs = 0;
        for(int num : n){
            if(set.find(num-1) == set.end()){
                int currentNumber = num;
                int currentConsecutiveSequence = 1;
                while(set.find(currentNumber+1) != set.end()){
                    currentNumber++;
                    currentConsecutiveSequence++;
                }
                lcs = max(lcs, currentConsecutiveSequence);
            }
        }
        return lcs;
    }
};
