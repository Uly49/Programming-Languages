# Ulysses Palomar
# CSCI 333 Programming languages
# Assignment 1 Question 4
# This program will generate and amount of playing cards from a standard deck

class Card:

    def __init__(self, rank, suit):
        #Initialize a card
        #:param rank: an integer - ranging from 1-13
        #:param suit: a char     - 'd' for Diamond, 'c' for Club, 'h' for Heart, 's' for Spade

        # Dictionary contains spelling rank of a card
        self.ranks = {1: "Ace", 2: "Two", 3: "Three", 4: "Four", 5: "Five",
                      6: "Six", 7: "Seven", 8: "Eight", 9: "Nine", 10: "Ten",
                      11: "Jack", 12: "Queen", 13: "King"}

        # Dictionary contains spelling suit of a card
        self.suits = {'d': "Diamonds", 'c': "Club", 'h': "Heart", 's': "Spades"}

        self.rank_value = rank
        self.suit_value = suit

    def getRank(self):
        #Returns rank of card
        return self.ranks[self.rank_value]

    def getSuit(self):
        #Returns suit of card
        return self.suits[self.suit_value]

    def value(self):
        #Returns value of card
        if self.rank_value == 1:
            return 1
        elif 11 <= self.rank_value <= 13:
            return 10
        else:
            return self.rank_value

    def __str__(self):
        #Returns string representation of card
        _str = self.getRank() + " of " + self.getSuit()
        return _str


if __name__ == "__main__":
    #Main function
    test_card = Card(1, 'c')
    print(test_card.getRank())
    print(test_card.getSuit())
    print(test_card.value())
    print(test_card)

    c1 = Card(5, "c")
    print(c1.getRank())
    print(c1.getSuit())
    print(c1.value())
    print(c1)

    q1 = Card(12, "d")
    print(q1.getRank())
    print(q1.getSuit())
    print(q1.value())
    print(q1)