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
	// arr := []int{2, 4, 5, 5, 6, 73, 2, 3, 4}
	// fmt.Println(arr)
	// for i := 0; i < len(arr); i++ {
	// 	fmt.Println(arr[i])
	// }

	// for index, element := range arr {
	// 	fmt.Println(index+1, " -> ", element)
	// }

	groups := [][]string{{"one", "two", "three"}, {"inb", "math", "Wel"}, {"olympic", "big o", "data"}}

	for i := 0; i < len(groups); i++ {
		fmt.Println(groups[i])
		for j := 0; j < len(groups[i]); j++ {
			fmt.Println(groups[i][j])
		}
	}
}

func main() {
	// count(2)
	array()
}
