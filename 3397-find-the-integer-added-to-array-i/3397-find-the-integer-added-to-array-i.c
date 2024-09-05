int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int ans = 0;
    for(int i = 0;i < nums1Size;i++){
        ans += nums2[i] - nums1[i];
    }
    return ans/nums1Size;
}