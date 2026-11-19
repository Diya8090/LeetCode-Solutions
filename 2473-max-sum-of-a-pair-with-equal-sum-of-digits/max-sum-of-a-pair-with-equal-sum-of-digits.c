int digitSum(int num){
    int sum=0;

    while(num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int maximumSum(int* nums, int numsSize) {
 int maxSum = -1;
    int maxDigit[82];

    for (int i = 0; i < 82; i++) {
        maxDigit[i] = -1;
    }

    for (int i = 0; i < numsSize; i++) {

        int sum = digitSum(nums[i]);

        if (maxDigit[sum] != -1) {

            int pairSum = nums[i] + maxDigit[sum];

            if (pairSum > maxSum) {
                maxSum = pairSum;
            }
        }

        if (nums[i] > maxDigit[sum]) {
            maxDigit[sum] = nums[i];
        }
    }

    return maxSum;
}