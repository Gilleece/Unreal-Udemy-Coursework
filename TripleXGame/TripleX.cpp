#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
  // Print welcome messages to the terminal
    std::cout <<"\n\nYou've found youself on the mainstreet of Itaewon at 3am on a Saturday. The weather outside is -15c, right in the heart of winter. You promised yourself you'd get the last subway home but... well, here you are.\nAfter being ignored by a barrage of taxi drivers hell bent on not taking customers, you felt your body temperature drop to dangerous levels. You only had have option left... \nSEOUL TAXI XXX APP.\n\n";
    std::cout << "You are currently on Level " << Difficulty <<". Make it to level 5 to earn the respect of a drunk 70 year old adjoshhi taxi driver and grab a ride, or freeze to death....";  
    std::cout <<"\n\n                                   \n                 SEOUL         88  \n  ,d                           \"\"  \n  88                               \nMM88MMM ,adPPYYba, 8b,     ,d8 88  \n  88    \"\"     `Y8  `Y8, ,8P'  88  \n  88    ,adPPPPP88    )888(    88     XXX  \n  88,   88,    ,88  ,d8\" \"8b,  88  \n  \"Y888 `\"8bbdP\"Y8 8P'     `Y8 88  ";                                   
}

void MiddleMessage(int Difficulty)
{
    std::cout << "\n\n---------------------------------------------\n\nWell done! You are now on Level " << Difficulty <<". Keep going! (Or freeze to death lol! Don't want that!)";  
    std::cout <<"\n\n                                   \n                 SEOUL         88  \n  ,d                           \"\"  \n  88                               \nMM88MMM ,adPPYYba, 8b,     ,d8 88  \n  88    \"\"     `Y8  `Y8, ,8P'  88  \n  88    ,adPPPPP88    )888(    88     XXX  \n  88,   88,    ,88  ,d8\" \"8b,  88  \n  \"Y888 `\"8bbdP\"Y8 8P'     `Y8 88  ";                                   
}

void FinalMessage(int Difficulty)
{
    std::cout << "\n\n---------------------------------------------\n\nYou made it to the last level! You are now on Level " << Difficulty <<". You're so close to earning his RESPECT (Or, again, you'll freeze to death lol! Still don't want that!)";  
    std::cout <<"\n\n                                   \n                 SEOUL         88  \n  ,d                           \"\"  \n  88                               \nMM88MMM ,adPPYYba, 8b,     ,d8 88  \n  88    \"\"     `Y8  `Y8, ,8P'  88  \n  88    ,adPPPPP88    )888(    88     XXX  \n  88,   88,    ,88  ,d8\" \"8b,  88  \n  \"Y888 `\"8bbdP\"Y8 8P'     `Y8 88  ";                                   
}

bool PlayGame(int Difficulty)
{
    if (Difficulty == 1)
    {
        PrintIntroduction(Difficulty);
    }
    
    else if (Difficulty == 5)
    {
        FinalMessage(Difficulty);
    }

    else
    {
        MiddleMessage(Difficulty);
    }


    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << "\n\n- To earn respect, you must enter 3 numbers to complete the puzzle.\n";
    std::cout << "- The 3 numbers added together must be: " << CodeSum;
    std::cout << "\n- At the same time, the 3 numbers multipled must be: " << CodeProduct;

    // store player guess
    int GuessA, GuessB, GuessC;
    std::cout << "\n\nEnter your 3 numbers (seperated by spaces):";
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\nYou entered " << GuessA << ", " << GuessB << ", " << GuessC << " ...you stare anxiously at the app as it processes your input...\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n";
    system("pause");

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC; 

    // Check if correct guess
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        if (Difficulty < 6)
        {
            std::cout << "\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\nCongratulations! You beat this level. There's still hope that you won't die!\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n\n---------------------------------------------\n ";
        return true;
        }
        
        
    }
    else
    {
        std::cout << "\n\n\n\n\n\n\n\n\n\nTo your horror, the app spits out a message declaring that despite your best efforts you were not able to impress any adjosshis in your area. \nAs the app reloads to let you try again, you feel your core temperature reach a near deadly low. \nSuddenly, like an angel, you see a vacant taxi slow down to where you are standing. The window rolls down and you, barely audibly, say your address and the taxi driver responds 'go other side of road'. As the taxi pulls off, you feel your heart stop and your life end. \nYou really should have taken the last subway home.";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore();// Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
            if (LevelDifficulty == 6)
            {
                std::cout << "\n\nYou done it! \nAgainst all the odds, you beat the app and a taxi driver began reluctantly making their way to your location. \nAs you get into the taxi you feel relief that your life will not end tonight, on the cold frozen streets of Itaewon. \nThe car's heater breaths new life into your body and you feel a faint smile settle on your lips. However, you notice the pungent aroma of soju from the driver's breath too late. \nAs the taxi plummets into the Han River you think to yourself 'I really should have gotten the last subway home lol rip.' \n\nThis app was sponsored by Uber. Give yourself a chance at life after the last subway, with Uber.";
                return 0;
            }
            
        }
        else
        {
            return 0;
        }
        
        
    }
    return 0;
}