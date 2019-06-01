#include <iostream>

int main()
{
    // Print welcome messages to the terminal
    std::cout <<"You've found youself on the mainstreet of Itaewon at 3am on a Saturday. The weather outside is -15c, right in the heart of winter. You promised yourself you'd get the last subway home but... well, here you are.\nAfter being ignored by a barrage of taxi drivers hell bent on not taking customers, you felt your body temperature drop to dangerous levels. You only had have option left... \nSEOUL TAXI XXX APP.\n\n";
    std::cout <<"Make your way to level 10 to earn the respect of a drunk 70 year old adjoshhi taxi driver and grab a ride, or freeze to death....";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int NumberSum = CodeA + CodeB + CodeC;
    const int NumberProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << std::endl << std::endl;
    std::cout << "- To earn respect, you must enter 3 numbers to complete the puzzle." << std::endl;
    std::cout << "- The 3 numbers added together must be: " << NumberSum << std::endl;
    std::cout << "- At the same time, the 3 numbers multipled must be: " << NumberProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << "Enter your 3 numbers:";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered " << GuessA << ", " << GuessB << ", " << GuessC << " ...ridiculous! WHAT A RIDICULOUS GUESS. FOR SHAME. NO TAXI FOR YOU.";

    return 0;
}