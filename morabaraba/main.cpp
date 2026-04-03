#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


struct Game{

    //ifstream input;
    //ofstream output;

  



   /* Game(){

        input.open("input.txt");
        output.open("output.txt");

    }*/

    void Placement(){
        bool isempty = false;// check if the spot is empty
        // maybe have a function for isempty outside of the void
    // add placement info here
    }

    void Movement(){
    // add movement info here
    }

    bool isMill(){
        bool ismill = true;
        int n = 0;
//define a mill
//how a mill is formed
// maybe define mill under Game class
    if(n==3){
        return ismill;
    }
    else{
        return false;
    }
    }

    bool isEndGame(){
        return false;
    }

};


class Intersection{
public:
    string label;
    int status;
     const int EMPTY = 0; 
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
    vector<Intersection> i;
    vector<Square> s;

     int TotalNumPieces;

    vector<vector<int>> board;
    vector<Square> squares;
   
    Board()
    {
        squares.push_back(Square("S0"));
        squares.push_back(Square("S1"));
        squares.push_back(Square("S2"));
    }
    void printBoard(){
        for(const auto& row : board){
            for(int cell : row){
                cout << cell << " ";
            }
            cout << endl;
        }
    }

      void placePiece(string pos, int player){
            int sIdx= pos[1]- '0';
            int iIdx= pos[3]- '0';
            if (sIdx>=0 && sIdx< 3 && iIdx>=0 && iIdx<8){
                squares[sIdx].intersections[iIdx].status= player;
            }
        }

};



string Alg_2(){
    //not sure if I should do it like this or just have a class for it

}



       
int main()
{ 
    ifstream input("input.txt");
    ofstream output("output.txt");

    if(!input.is_open()){
        return 1;
    }

   
    const int ALG_1 =1;
    const int ALG_2= 2;
    int cow;
    int score;
    Board b;

    while(input>> cow){
        b.TotalNumPieces= cow;
        output<<cow<<endl;
    
    }
    
    switch(cow)
    {

    case 4: 
    case 6:
    case 9:
    case 12:
        
for (int i; i<cow; ++i){
    string move1, move2;
    cout<< "Alg_1 move:";
    cin>>move1; //might not need this
    b.placePiece(move1, ALG_1);
    output<< "Alg_100-"<<move1<<endl;
    cout<<"Alg_2 move:";
    cin>>move2;
    b.placePiece(move2, ALG_2);
    output<< "Alg_200-"<<move2<<endl;
}
output<<"its a draw"<<endl<<endl;
break;
  
    default:
        cout<<"Invalid number of pieces. Please enter 4, 6, 9, or 12."<<endl;
        break;
    
}


    output.close();
    input.close();

    return 0;
}

