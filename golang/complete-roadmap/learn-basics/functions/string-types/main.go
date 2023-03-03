package main

import "fmt"

func main() {
	card := newCard()
	card2 := newCard2()
	newCard3()
	fmt.Println(card, card2)

}

func newCard() string {
	return "Hello string function"
}

func newCard2() int {
	return 10 + 20
}

func newCard3() {
	fmt.Println("Hello world")
}
