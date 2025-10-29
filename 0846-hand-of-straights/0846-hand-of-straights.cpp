class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0)
            return false;
        unordered_map<int, int> mp;

        for (int i : hand) {
            mp[i]++;
        }

        vector<int> ans;

        for (auto it : mp) {
            ans.push_back(it.first);
        }

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++) {
            if (mp[ans[i]] > 0) {
                int groupsToMake = mp[ans[i]];

                for (int j = 0; j < groupSize; j++) {
                    
                    // Calculate the next card we need in the sequence
                    int currentCard = ans[i] + j;
                    
                    // Check if we have enough of this partner card
                    if (mp[currentCard] < groupsToMake) {
                        // e.g., We need two '2's but only have one
                        return false;
                    }
                    
                    // "Use" the cards by decrementing their count
                    mp[currentCard] -= groupsToMake;
                }
            }
        }

        return true;
    }
};