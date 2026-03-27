#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

const int EMPTY = 0; 
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
        vector<Intersection> intersections;

    Square (string n) : name(n) {
        for (int j = 0; j<8; ++j){
            intersections.push_back(Intersection(name + "i" + to_string(j)));
        }
    }

};

class Board{
public:
    vector<Square> squares;
    int TotalNumPieces;

    Board()
    {
        squares.push_back(Square("S0"));
        squares.push_back(Square("S1"));
        squares.push_back(Square("S2"));
    }
        void placePiece(string pos, int player){
            int sIdx= pos[1]- '0';
            int iIdx= pos[3]- '0';
            if (sIdx>=0 && sIdx< 3 && iIdx>=0 && iIdx<8){
                squares[sIdx].intersections[iIdx].status= player;
            }
        }
    };
       
int main()
{ 
    ifstream input("input.txt");
    ofstream output("output.txt");

    if(!input.is_open()){
        return 1;
    }
    int cow;
    while(input>> cow){
        Board b;
        b.TotalNumPieces= cow;
        output<<cow<<endl;
    
    
    switch(cow)
    {

    case 4: 
    case 6:
    case 9:
    case 12:
        
for (int i; i<cow; ++i){
    string move1, move2;
    cout<< "Alg_1 move:";
    cin>>move1;
    b.placePiece(move1, ALG_1);
    output<< "Alg_100-"<<move1<<endl;
    cout<<"Alg_2 move:";
    cin>>move2;
    b.placePiece(move2, ALG_2);
    output<< "Alg_200-"<<move2<<endl;
}
output<<"its a draw"<<endl<<endl;
break;
    }
}


    output.close();
    input.close();
    return 0;
}
