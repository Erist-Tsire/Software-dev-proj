#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

const int EMPTY = 0; //f
const int ALG_1 =1;
const int ALG_2= 2;


   


class Intersection{
public:
    string label;
    int status;
    vector<string> adjacencies;

    Intersection(): status(EMPTY) {}
    Intersection(string lbl) :
    label(lbl), status (EMPTY) {}


};


class Square{
    public:
        string name;
        vector<Intersections> Intersections;

    Square (string n) : name(n) {
        for (int j = 0; j<8; ++j){
            intersections.push_back(Intersection(name + ",i" + to_string(j)));
        }
    }

};


class Board{
public:

    ifstream input("input.txt");
    ofstream output("output.txt");

    vector<Square> squares;
    int TotalNumPieces;

    Board(string input, string output){
        squares.push_back(Square("S0"));
        squares.push_back(Square("S1"));
        square.push_back(Square("S2"));
        
        if (input.is_open()){
            input>> TotalNumPieces;
        }
        else{
            TotalNumPieces=4;
        }
        }
        }

    }




};


int main()
{
    Game g;
    int cow;
    int score;


    g.input >> cow;

    switch(cow)
    {

    case 4:
        //something
        break;
    case 6:
        //something
        break;
        //something
    case 9:
        // something
        break;
    case 12:
        //something
        break;

    }


    g.output.close();
    g.input.close();
    return 0;
}
