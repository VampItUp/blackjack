#include <iostream>
#include <cstdlib>
#include <string>

using std::string;

int value;
string suites[] = {"Hearts", "Clubs", "Spades", "Diamonds"};

struct Card
{
    string suit;
    int value;
};

struct Dealer
{
    Card deck;
    int totalValue;
    bool bust = false;
};

struct Player
{
    Card deck;
    int totalValue;
    bool bust = false;

};

Player player;
Dealer dealer;
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


void Game()
{
    for (int t = 0; t < 100; t++)
    {
        SetUp();
        int x = 0;
        while (player.bust == false || dealer.bust == false)
        {
            if(player.totalValue < 13)
            {
                player.totalValue += deck[x].value;
                x++;
            }
            dealer.totalValue += deck[x].value;
            x++;
            if(player.totalValue > 21 || dealer.totalValue == 21 )
            {
                player.bust = true;
                std::cout << "Dealer has won" << std::endl;
            }
            else if(player.totalValue == 21 || dealer.totalValue > 21)
            {
                dealer.bust = true;
                std::cout << "Player has won" << std::endl;
            }
        }
        player.bust = false;
        dealer.bust = false;
    }
    
    

}
