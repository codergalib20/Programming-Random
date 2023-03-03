package main

import "fmt"

func main() {
	books := [3][4]int{{1, 2, 3, 4}, {5, 6, 7, 7}, {4, 6, 7, 8}}

	// fmt.Printf("%T", books)
	// fmt.Println(books[2][3])

	for i := 0; i < len(books); i++ {
		for j := 0; j < len(books[i]); j++ {
			fmt.Println(books[i][j])
		}
	}
}
