/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* nums, int numsSize, int* returnSize) {
   for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // Step 2: Create result array
    int* result = (int*)malloc(numsSize * sizeof(int));

    // Step 3: Swap in pairs
    int k = 0;
    for (int i = 0; i < numsSize; i += 2) {
        result[k++] = nums[i + 1];
        result[k++] = nums[i];
    }

    *returnSize = numsSize;
    return result; 
}
