/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int s, int* returnSize) {
    for (int i = s - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i] += 1;
            *returnSize = s;
            return digits;
        }
        digits[i] = 0;
    }

    int* result = (int*)malloc((s + 1) * sizeof(int));
    result[0] = 1;
    for (int i = 1; i <= s; i++) {
        result[i] = 0;
    }
    *returnSize = s + 1;
    return result;
}