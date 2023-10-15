void sortColors(vector<int> &nums)
{
    int low = 0;                            //set pointer-1
    int mid = 0;                            // set pointer-2
    int high = nums.size() - 1;             // set pointer-3

    while (mid <= high)                    //required array:
    {
        if (nums[mid] == 1)                    //00000111112222222
        {
            mid++;                            //if mid==1 increment mid pointer
        }
        else if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);     // if mid==0 increment mid pointer
                                            //swap values of low and mid pointer 
            low++;                          //increment low and mid pointer 
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[high], nums[mid]);     //if mid ==2
            high--;                          // swap values of low and high pointer
            // mid++;                        //decrement low and mid pointer
        }
    }
}         //if used merge sort complexity ----nlogn 
         //by DNF ---O(n)