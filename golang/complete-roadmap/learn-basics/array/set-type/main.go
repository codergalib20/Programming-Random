package main

func main() {
	cards := deck{"Ace of Diamonds", newCard()}
	cards = append(cards, "Siz of Spades")
	cards.print()
}

func newCard() string {
	return "Five of Diamonds"
}
