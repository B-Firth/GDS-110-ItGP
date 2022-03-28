/*
 Name: Branden R. Firth
 
 Date: 08 Feb. 2022

File name: BFirth_Midterm.cpp 

Variables used:

    pHP        Player's Hit Points / Health
    eHP        Enemy's Hit Points / Health
    pSTR       Player's Strength
    eSTR       Enemy's Strength
    AttRnd     Attack Round / Attack Number counter
    att        The randomly generated attack

*/

#include <iostream>
using namespace std;

int main()
{
    //Declaration of Variables
    int pHP = 100, pSTR = 100, eHP = 100, eSTR = 100, attRnd = 0, att;

    //While loop to handel the attack rounds: If Player or Enemy's HP is greater than 5 loop
    while (pHP > 5 && eHP > 5)
    {
        //generate a random number and assign it to the att variable
        att = rand() % 30;

        //if the rndm gen number is even...
        if (att % 2 == 0)
        {
            //increase round num
            attRnd = attRnd++;

            //subtract att num from the enemy's HP and from the Player's Strength
            eHP = eHP - att;
            pSTR = pSTR - att;

            //output to the console to user
            cout << "Attack number: " << attRnd << endl;
            cout << "Enemy has takes a hit!" << endl;
            cout << "Enemy's health: " << eHP << endl;
            cout << "Enemy's strength: " << eSTR << endl;
            cout << endl;
            
        }
        else //If the rndm gen number is odd...
        {

            //increase the round num
            attRnd = attRnd++;

            //subtract att num from the Player's HP and form the Enemy's Strength
            pHP = pHP - att;
            eSTR = eSTR - att;

            //output to the console to user
            cout << "Attack number: " << attRnd << endl;
            cout << "Player takes a hit!" << endl;
            cout << "Player's health: " << pHP << endl;
            cout << "Player's strength: " << pSTR << endl;
            cout << endl;
        }

    }

    //Pause the System/Program
    system("pause");
    
}
