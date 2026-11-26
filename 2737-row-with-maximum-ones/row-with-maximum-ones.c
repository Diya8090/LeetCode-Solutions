/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize) {
    int maxRow = 0;
    int maxCount = 0;

    for (int i = 0; i < matSize; i++) {
        int currentCount = 0;
      
        for (int j = 0; j < matColSize[i]; j++) {
            if (mat[i][j] == 1) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxRow = i;
        }
    }

    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = maxRow;
    result[1] = maxCount;
    
    *returnSize = 2;
    return result;
}