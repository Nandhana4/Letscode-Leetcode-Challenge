int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int x = numsSize * 2;

    // allocate memory dynamically
    int* nums1 = (int*)malloc(x * sizeof(int));

    // set return size
    *returnSize = x;

    // first copy
    for (int i = 0; i < numsSize; i++) {
        nums1[i] = nums[i];
    }

    // second copy
    for (int i = numsSize; i < x; i++) {
        nums1[i] = nums[i - numsSize];
    }

    return nums1;
}
