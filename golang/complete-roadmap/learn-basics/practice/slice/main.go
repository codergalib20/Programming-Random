package main

import "fmt"

func main() {
	teachers := []string{"one", "two", "three", "four", "five", "six", "seven", "eight"}

	for index, teacher := range teachers {
		fmt.Println(index, " -> ", teacher)
	}
}
