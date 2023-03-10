package main

import "fmt"

// func testcount(x int) int {
// 	if x == 11 {
// 		return 0
// 	}
// 	fmt.Println(x)
// 	return testcount(x + 1)
// }

// func main() {
// 	testcount(1)
// }

// func count(x int) int {
// 	if x == 30 {
// 		return 0
// 	}

// 	fmt.Println(x)
// 	return count(x + 1)
// }

func array() {
	arr := []int{2, 4, 5, 5, 6, 73, 2, 3, 4}
	// fmt.Println(arr)
	for i := 0; i < len(arr); i++ {
		fmt.Println(arr[i])
	}
}

func main() {
	// count(2)
	array()
}
