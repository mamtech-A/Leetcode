#include <iostream>

int minBitFlips(int start, int goal) {
    std::int32_t binaryStart[32]= {0}, binaryGoal[32] = {0};    //Create two array with maximum 32 int
    int i=31,j = 31; 
    int MinBitFlips = 0;
    while (start > 0) {     //Convert start number to binary
        binaryStart[i] = start % 2;
        start = start / 2;
        i--;

    }
    while (goal > 0) {      //Convert goal number to binary
        binaryGoal[j] = goal% 2;
        goal = goal / 2;
        j--;

    }
    for (size_t i = 0; i < 32; i++)     //Xor elements of two binary number and increase MinBitFlips if was true
    {
        if (binaryGoal[i] ^ binaryStart[i]) MinBitFlips++;
    }
    return MinBitFlips;
}


int main()
{
    int start, goal;
    std::cout << "Please enter your start number: ";
    std::cin >> start;
    std::cout << "Please enter your goal number: ";
    std::cin >> goal;
    std::cout << "Minimum bit flips to convert number: ";
    std::cout << minBitFlips(start,goal);
}

