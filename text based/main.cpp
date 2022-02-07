//
//  main.cpp
//  text based
//
//  Created by Bartosz Protasewicz on 2/6/22.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    string titleImage = "";
    string fileName = "title.rtf";
    
    ifstream inputFile;
    inputFile.open(fileName.c_str());
    
    if (inputFile)
    {
        while (inputFile)
        {
            string temp;
            getline(inputFile, temp);
            temp += "\n";
            titleImage += temp;
        }
        cout << titleImage << endl;
        
        inputFile.close();
    }
    
    
    return 0;
}
