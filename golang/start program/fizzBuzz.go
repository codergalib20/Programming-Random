package main

import "fmt"

func main() {

	for i := 1; i <= 50; i++ {
		divisibleBy3 := i%3 == 0
		divisibleBy5 := i%5 == 0
		if divisibleBy3 && divisibleBy5 {
			// Print Fizz Buzz when booth condition is true
			fmt.Println("FizzBuzz")
		} else if divisibleBy3 {
			fmt.Println("Fizz")
		} else if divisibleBy5 {
			fmt.Println("Buzz")
		} else {
			fmt.Println(i)
		}
	}
}

//
