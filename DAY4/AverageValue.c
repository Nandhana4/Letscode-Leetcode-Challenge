int averageValue(int* nums, int numsSize) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 6 == 0) {  // divisible by both 2 and 3
            sum += nums[i];
            count++;
        }
    }

    if (count == 0) return 0;

    return sum / count;  // integer average
}
