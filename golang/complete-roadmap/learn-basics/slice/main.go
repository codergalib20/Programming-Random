package main

import "fmt"

func main() {
	cards := []string{"football", "cricket", "chees", "hockey"}

	for i, card := range cards {
		fmt.Println(i, " -> ", card)
	}
}
