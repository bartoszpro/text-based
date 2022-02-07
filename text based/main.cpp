//
//  main.cpp
//  text based
//
//  Created by Bartosz Protasewicz on 2/6/22.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "PRESS ENTER TO CONTINUE" << endl;
    cin.ignore(); //improve here later
    
    //opening
    string characterName;
    cout << "A dark figure appears in the doorframe of your cabin. It is the Captain. He has been going from cabin to cabin waking up all the crewmates." << endl;
    cout << "\nCAPTAIN: Ay, get up! It is almost time, er..." << endl;
    cout << "\nHe stares at you with a blank face. It appears the Captain has forgotten your name..." << endl;
    cout << "\nEnter character name: ";
    getline(cin,characterName);
    cout << "\nYOU: " << characterName << endl;
    cout << "\nCAPTAIN: That's right, " << characterName << "! There are so many people on board that it is hard for me to remember every name, y'know. Anyway, we are about to make landfall, report up to the upper deck as soon as you can." << endl;
    cout << "\nThe Captain exits your cabin in a hurry and towards the next cabins." << endl;
    
    return 0;
}
