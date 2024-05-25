#include <stdio.h>

void merge(int nums1[], int m, int nums2[], int n) {
    int total = m + n - 1;  
    int index1 = m - 1;     
    int index2 = n - 1;     

    
    while (index1 >= 0 && index2 >= 0) {
        if (nums1[index1] > nums2[index2]) {
            nums1[total--] = nums1[index1--];
        } else {
            nums1[total--] = nums2[index2--];
        }
    }


    while (index2 >= 0) {
        nums1[total--] = nums2[index2--];
    }
}

int main() {
    int nums1[] = {1, 2, 3, 0, 0, 0}; 
    int nums2[] = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
