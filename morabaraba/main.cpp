#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Game{

    ifstream input;
    ofstream output;

    Game(){

        input.open("input.txt");
        output.open("output.txt");

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
