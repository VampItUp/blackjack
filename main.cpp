#include <iostream>
#include <cstdlib>
#include <string>

using std::string;

int value;
string suites[] = {"Hearts", "Clubs", "Spades", "Diamonds"};

enum Suit
{
    Hearts, Clubs, Spades, Diamonds
};


struct Card
{
    string suit;
    int value;
};

Card deck[52];

void SetUp()
{
    
    for (int i = 0; i < 52; i++)
    { 
        for (int j = 0; j < 4; j++)
        {
            for(int l = 0; l < 13; l++)
            {
                deck[i].suit = suites[j];
                deck[i].value = l;
            }
            
        }
        
    }
    
}

void Dealer()
{
    Card deck[];
    int totalValue;
    int wins;

    void Hit()
    {

    }
}

void Player()
{
    Card deck[];
    int totalValue
    int wins;

    void Hit()
    {

    }
    void Stay()
    {

    }

} 

void Game()
{
    
    SetUp();
    player.deck;
    while (player.bust == false || dealer.bust == false)
    {
        if(player.totalValue < 13)
        {
            
        }
    }

    

}
int main() 
{ 
    return 0;  
}