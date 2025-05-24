# Sum of largest prime Substrings

```c++
class Solution {
public:
    bool is_prime(long long n){

        if(n<2) return false;
        if(n==2) return true;
        if(n % 2 == 0) return false;

        for(long long i=3; i*i<=n; i+=2) if(n%i == 0) return false;

        return true;
    }

    long long find_max(vector<long long> &nums){

         int index = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[index]) index = i;
        }

        long long maxVal = nums[index];
        nums.erase(nums.begin() + index);

        return maxVal;
    }
    
    long long sumOfLargestPrimes(string s) {

        unordered_set<long long> unique_primes;

        long long sum =0;

       

        int size = s.length();

        for(int i=0; i<size; i++){

            long long num = 0;

            for(int j=i; j<size && j-i<15; j++){

                num = num*10 + (s[j]-'0');

                if(is_prime(num)) unique_primes.insert(num);
            }
        }
         vector<long long> nums(unique_primes.begin(), unique_primes.end());
        
        if(nums.size() == 0) return 0;

        if(nums.size() == 1) return nums[0];

        if(nums.size() == 2) return nums[0] + nums[1];

        if(nums.size() == 3) return nums[0] + nums[1] + nums[2];
    
        long long num1 = find_max(nums);
    
        long long num2 = find_max(nums);
    
        long long num3 = find_max(nums);
        
        cout<<num1<<" "<<num2<<" "<<num3;
        return num1 + num2 + num3;
    }
};
```
