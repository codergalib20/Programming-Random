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

func count(x int) int {
	if x == 30 {
		return 0
	}

	fmt.Println(x)
	return count(x + 1)
}

func main() {
	count(2)
}
