#include <iostream>
#include <array>
#include <random>
#include <algorithm>
using namespace std;

struct Card;
using Deck = std::array<Card, 52>;

enum class Ranks
{
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    Jack,
    Queen,
    King,
    Ace
};

enum class Suits
{
    Clubs,
    Diamonds,
    Hearts,
    Spades
};

struct Card
{
    Ranks rank{};
    Suits suit{};
};

ostream& operator << (ostream& os, const Card& card)
{
    switch(card.rank)
    {
        case (Ranks::two):  os << '2'; break;
        case (Ranks::three): os << '3'; break;
        case (Ranks::four): os << '4'; break;
        case (Ranks::five): os << '5'; break;
        case (Ranks::six): os << '6'; break;
        case (Ranks::seven): os << '7'; break;
        case (Ranks::eight): os << '8'; break;
        case (Ranks::nine): os << '9'; break;
        case (Ranks::ten): os << 'T'; break;
        case (Ranks::Jack): os << 'J'; break;
        case (Ranks::Queen): os << 'Q'; break;
        case (Ranks::King): os << 'K'; break;
        case (Ranks::Ace): os << 'A'; break;
        default: assert(false && "unknown rank"); break;
    }

    switch(card.suit)
    {
        case (Suits::Clubs): os << 'C'; break;
        case (Suits::Diamonds): os << 'D'; break;
        case (Suits::Hearts): os << 'H'; break;
        case (Suits::Spades): os << 'S'; break;
        default: assert(false && "unknown suit"); break;
    }
    return os;
}

Deck createDeck()
{
    Deck deck;
    for(int rank = 0; rank < 13; rank++) {
        for(int c=0; c < 4; c++) {
            deck[rank*4+c] = {static_cast<Ranks>(rank),static_cast<Suits>(c)};
        }
    }
    return deck;
}

void printDeck(const Deck& d) {
    bool first = true;

    cout << '[';
    for(Card c : d) {
        if (!first) cout << ", ";
        first = false;

        cout << c;
    }
    cout << ']' << endl;
}

void shuffleDeck(Deck &deck)
{
    static std::mt19937 mt{static_cast<mt19937::result_type>(std::time(nullptr))};
    std::shuffle(deck.begin(), deck.end(), mt);
}

int main()
{
    Deck deck = createDeck();
    printDeck(deck);
    shuffleDeck(deck);
    printDeck(deck);
}