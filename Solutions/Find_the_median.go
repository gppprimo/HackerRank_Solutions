package main

import (
	"fmt"
	"sort"
)

// Complete the findMedian function below.
func findMedian(arr []int32) int32 {
	sort.Slice(arr, func(i, j int) bool { return arr[i] < arr[j] })
	return arr[len(arr)/2]
}

func main() {
	array := []int32{3, 2, 5, 1, 8, 23, 22}
	fmt.Println(findMedian(array))
}
