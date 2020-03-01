vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> res;
    res.clear();
    
    if(nums.size() < 2)
        return res;
    
    unordered_map<int, int> valueIndexMap;          // 用于记录数组中每个元素的index的值
    valueIndexMap.clear();
    
    int numsLen = nums.size();
    for(int i = 0; i < numsLen; ++i){
        valueIndexMap[nums[i]] = i;
    }
    
    // 开始寻找targe-nums[j] 是否存在在valueIndexMap容器中，存在记录元素的索引值
    int otherValue = 0;
    for(int j = 0;  j < numsLen; ++j){
        otherValue = target - nums[j];
        if( (valueIndexMap.find(otherValue) != valueIndexMap.end()) && (j < valueIndexMap[otherValue]) ){
            res.push_back(j);
            res.push_back(valueIndexMap[otherValue]);
        }
    }
    
    return res;
}
