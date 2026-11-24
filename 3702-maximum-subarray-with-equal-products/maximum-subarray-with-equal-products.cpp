class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {

            long long g = 0;
            long long l = 1;
            long long prod = 1;

            for(int j = i; j < n; j++) {

                long long x = nums[j];

                g = gcd(g, x);

                long long common = gcd(l, x);

                // Check multiplication overflow
                if(l / common > LLONG_MAX / x) break;
                l = (l / common) * x;

                if(prod > LLONG_MAX / x) break;
                prod *= x;

                if(prod == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};