
class ProductOfNumbers {
public:
    vector<int> nums;

    ProductOfNumbers() {
        nums.push_back(1);
    }

    void add(int num) {
        if(num == 0) {
            nums.clear();
            nums.push_back(1);
        }
        else {
            nums.push_back(nums[nums.size()-1] * num);
        }
    }

    int getProduct(int k) {
        if(k >= nums.size()) return 0;

        return nums[nums.size()-1] / nums[nums.size()-k-1];
    }
};
