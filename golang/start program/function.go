package main

import "fmt"

func double(x int) int {
	return x * x
}

func doubleDouble(x, y int) int {
	return (x * y) + 20
}

func stringReturn(x string) string {
	return x
}

func main() {
	fmt.Println(double(20))
	var number = doubleDouble(5, 10)
	fmt.Println(number)
	fmt.Println(stringReturn("Welcome to string function"))
}
