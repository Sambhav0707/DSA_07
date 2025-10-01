class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
vector<int> result; // Use a vector as a stack

        for (int ast : asteroids) {
            if (ast > 0) {
                // Positive asteroids are always added.
                result.push_back(ast);
            } else {
                // Negative asteroid: handle collisions.
                // 1. Destroy all smaller positive asteroids.
                while (!result.empty() && result.back() > 0 && result.back() < abs(ast)) {
                    result.pop_back();
                }

                // 2. Decide the fate of the incoming asteroid.
                if (result.empty() || result.back() < 0) {
                    // If stack is empty or top is also negative, no collision.
                    result.push_back(ast);
                } else if (result.back() == abs(ast)) {
                    // If they are the same size, both are destroyed.
                    result.pop_back();
                }
                // else: result.back() > abs(ast), so the incoming one is destroyed. Do nothing.
            }
        }
        return result;

        
    }
};