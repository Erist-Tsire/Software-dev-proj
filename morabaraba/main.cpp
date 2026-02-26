#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//tshiamo
using namespace std;

struct Game{

    ifstream input;
    ofstream output;

    Game(){

        input.open("input.txt");
        output.open("output.txt");

    }

    Placement(){
    // add placement info here
    }

    Movement(){
    // add movement info here
    }

};

class Intersection{
public:
    string label;
    Intersection(string label);

};


class Square{
    public:
        string name;


        vector<Intersection> i;
        Square(string name, vector<Intersection> i);

};


class Board{
public:
    vector<Intersection> i;
    vector<Square> s;
    Board(){
        s.push_back(Square("s1",i));
        s.push_back(Square("s2",i));
        s.push_back(Square("s3",i));

    }




};

class Mill{
//define a mill
//how a mill is formed
// maybe define mill under Game class

};

string Alg_1(){
    //not sure if I should do it like tgis or just have a class for it

}




int main()
{
    Game g;
      int num_cows;
    int score;


    g.input >> num_cows;



    switch(num_cows)
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
