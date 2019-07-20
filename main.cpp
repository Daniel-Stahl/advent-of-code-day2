#include <fstream>
#include <iostream>
#include <string>
#include <vector>

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
    //int pairCount;
    //int tripleCount;
    vector<string> vec;
    
    inFile.open("/Users/stahl/Desktop/Guardians/AdventCodeDay2/AdventCodeDay2/infile.txt");
    
    if (!inFile) {
        cout << "No file found" << endl;
        exit(1);
    } else {
        cout << "File found!" << endl;
    }
    
    inFile >> data;
    while (!inFile.eof()) {
        
//        bool pair = false;
//        bool triple = false;
//
//        cout << data << endl;
//        for (int i = 0; i < data.size(); i++) {
//            for (int k = 0; k < 26; k++) {
//                if (data.at(i) == myArray[k].letter) {
//                    myArray[k].count++;
//                }
//            }
//        }
//
//        for (int a = 0; a < 26; a++) {
//            if (myArray[a].count == 2 && pair != true) {
//                pair = true;
//                pairCount++;
//                cout << myArray[a].letter << " " << myArray[a].count << endl;
//            } else if (myArray[a].count == 3 && triple != true) {
//                triple = true;
//                tripleCount++;
//                cout << myArray[a].letter << " " << myArray[a].count << endl;
//            }
//
//            myArray[a].count = 0;
//        }
        
        //PART 2
        vec.push_back(data);
        
        
        inFile >> data;
    }
    //PART 2
    int irreg;
    for (int x = 0; x < vec.size(); x++) {
        for (int y = x+1; y < vec.size(); y++) {
            for (int z = 0; z < vec.at(x).size() - 1; z++) {
                if (vec.at(x).at(z) != vec.at(y).at(z)) {
                    irreg++;
                }
            }
            
            if (irreg == 1) {
                cout << vec.at(x) << endl;
                cout << vec.at(y) << endl;
                cout << irreg << endl;
            }
            irreg = 0;
            
        }
        
    }
    //cout << "Pairs " << pairCount << endl;
    //cout << "Triples " << tripleCount << endl;
}
