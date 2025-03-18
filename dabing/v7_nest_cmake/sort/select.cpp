#include "sort.h"

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // 找到未排序部分的最小值的索引
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // 交换最小值和当前索引的值
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}