vector<int> twoSum(vector<int>& nums, int target) 
{
    assert(nums.size() >= 0);
    
    unordered_map<int, int> record;     //  定义一个查找表空间
    for(int i = 0; i < nums.size(); i++){
            
        int complement = target - nums[i];
        if(record.find(complement) != record.end())    //说明已经找到了Key
            return vector<int> {i, record[complement]};
        else
            record[nums[i]] = i;
    }
    
    throw invalid_argument("the input has no solution");
}

