#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty)
{
std::cout << "You're a secret agent breaking into a LEVEL " << difficulty << " server room\n";
std::cout << "Your SuperHacker 2000 tells you the following information...\n";

srand(time(NULL)); // create new random sequence based on time of day
const int a = rand() % difficulty + difficulty;
const int b = rand() % difficulty + difficulty;
const int c = rand() % difficulty + difficulty;

const int sum = a + b + c;
const int product = a * b * c;

std::cout << std::end1;
std::cout << "+ There are three numbers in the code\n";
std::cout << "+ The codes multiply to give " << product << std::end1;
std::cout << "+ The codes add up to " << sum << std::end1;

std::cout << std::end1;
std::cout << "Enter the three code numbers followed by x\n";
std::cout << std::end1;

int answer;
int trialSum = 0;
int trialProduct = 1; // Note required starting point

// Process the numbers in the input
while(std::cin >> answer)
{
trialSum += answer;
trialProduct *= answer;
}

std::cout << std::end1;
if (trialSum == sum && trialProduct == product)
{
std::cout << "CONGRATULATIONS, YOU'RE IN. Now hurry before anyone finds you.\n";
std:cout << "=========================================================================\n";
}
else
{
std::cout << "BOOM :-( You failed miserably, and died horribly.\n";
}

// add a main function for running program
