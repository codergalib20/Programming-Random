package main

import "fmt"

func main() {
	s := sum(10, 12)
	intro("Asadullah Hil Galib", 18)
	fmt.Println(s)
}

func sum(num1, num2 int) int {
	return num1 + num2
}

func intro(name string, age int) {
	fmt.Println("This is ", name, " I'm ", age)
}
