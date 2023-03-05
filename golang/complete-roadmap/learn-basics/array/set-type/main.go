package main

import "fmt"

func main() {
	cards := deck{"Ace of Diamonds", newCard()}
	cards = append(cards, "Siz of Spades")
	for index, card := range cards {
		fmt.Println(index, card)
	}
}

func newCard() string {
	return "Five of Diamonds"
}
