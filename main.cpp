#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct CharSort {
    char letter;
    int count = 0;
};

int main() {
    ifstream inFile;
    CharSort myArray[] = {
        {'a', 0},
        {'b', 0},
        {'c', 0},
        {'d', 0},
        {'e', 0},
        {'f', 0},
        {'g', 0},
        {'h', 0},
        {'i', 0},
        {'j', 0},
        {'k', 0},
        {'l', 0},
        {'m', 0},
        {'n', 0},
        {'o', 0},
        {'p', 0},
        {'q', 0},
        {'r', 0},
        {'s', 0},
        {'t', 0},
        {'u', 0},
        {'v', 0},
        {'w', 0},
        {'x', 0},
        {'y', 0},
        {'z', 0},
    };
    
    string data;
    
    inFile.open("/Users/stahl/Desktop/Guardians/AdventCodeDay2/AdventCodeDay2/infile.txt");
    
    if (!inFile) {
        cout << "No file found" << endl;
        exit(1);
    } else {
        cout << "File found!" << endl;
    }
 
    while (!inFile.eof()) {
        inFile >> data;
        bool pair = false;
        bool triple = false;
        int pairCount;
        int tripleCount;

        cout << data << endl;
        for (int i = 0; i < data.size(); i++) {
            for (int k = 0; k < 26; k++) {
                if (data.at(i) == myArray[k].letter) {
                    myArray[k].count++;
                }
                
                if (myArray[k].count == 2 && pair != true) {
                    pair = true;
                    pairCount++;
                    cout << myArray[k].letter << " " << myArray[k].count << endl;
                } else if (myArray[k].count == 3 && triple != true) {
                    triple = true;
                    tripleCount++;
                    cout << myArray[k].letter << " " << myArray[k].count << endl;
                }
                
                myArray[i].count = 0;
            }
        }
    }
}
