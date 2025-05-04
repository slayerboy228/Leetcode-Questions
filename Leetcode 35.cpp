int searchInsert(int* nums, int numsSize, int target) {
    int l = 0;
    int h = numsSize -1;
    int mid;
    while(l <= h)
    {
        mid = (l+h)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[mid] < target)
            l = mid +1;
        else
            h = mid -1;
    }
    return l;
}
