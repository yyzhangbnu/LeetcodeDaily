class NumArray {
public:
    NumArray(vector<int> &nums) {
        Nums = nums;
    }
     
    int sumRange(int i, int j) {
        if(i>=0 && j>=i && j+1<=Nums.size())
        {
            int result = 0;
            for(int start = i; start<j+1; start++)
            {
                result +=Nums[start];
            }
            return result;
        }
        else
        {
            return -1;
        }
    }


private:
   vector<int> Nums;
};
