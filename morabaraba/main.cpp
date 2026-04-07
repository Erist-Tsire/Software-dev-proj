#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>


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



/*class Intersection{
public:
    std::string label;
    Intersection(std::string label);

};*/


class Square{
    public:
        std::string name;

    Square(string n) : name(n){}
};


class Board{
public:
  //  vector<Intersection> i;
    vector<Square> s;
     vector<int> boardState;
    int TotalNumPieces;

    Board(int cows = 0) : TotalNumPieces(cows){
        s.push_back(Square("s2 i0"));
        s.push_back(Square("s2 i1"));
        s.push_back(Square("s2 i2"));
        s.push_back(Square("s2 i3"));
        s.push_back(Square("s2 i4"));
        s.push_back(Square("s2 i5"));
        s.push_back(Square("s2 i6"));
        s.push_back(Square("s2 i7"));

        s.push_back(Square("s1 i0"));
        s.push_back(Square("s1 i1"));
        s.push_back(Square("s1 i2"));
        s.push_back(Square("s1 i3"));
        s.push_back(Square("s1 i4"));
        s.push_back(Square("s1 i5"));
        s.push_back(Square("s1 i6"));
        s.push_back(Square("s1 i7"));

        s.push_back(Square("s0 i0"));
        s.push_back(Square("s0 i1"));
        s.push_back(Square("s0 i2"));
        s.push_back(Square("s0 i3"));
        s.push_back(Square("s0 i4"));
        s.push_back(Square("s0 i5"));
        s.push_back(Square("s0 i6"));
        s.push_back(Square("s0 i7"));

        boardState.resize(s.size(), 0);

    }

    void placePiece(int idx, int player) {
        if (idx >= 0 && idx < (int)s.size() && boardState[idx] == 0) {
            boardState[idx] = player;
        }
    }


    void printBoard() const {
        for (int i = 0; i < (int)s.size(); ++i) {
            cout << s[i].name << ": ";
            if (boardState[i] == 0) cout << "EMPTY";
            else if (boardState[i] == 1) cout << "ALG_1";
            else cout << "ALG_2";
            cout << endl;
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
    Board b(cow);
    string name;

    input >> cow;
    /*while(input >> cow){
        b.TotalNumPieces= cow;
        output<<cow<<endl;

    }*/


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

if(cow != 4 && cow != 6 && cow != 9 && cow != 12 ){
        cout<<"Invalid number of pieces. Please enter 4, 6, 9, or 12."<<endl;

}


//cout << b.s[13].name << endl;
    output.close();
    input.close();

    return 0;
}

