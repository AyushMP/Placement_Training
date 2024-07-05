#include<iostream>
using namespace std;

class Game{
    public:
    string GameName;
    string Category;
    
    Game(string Gname, string Cat){
        GameName = Gname;
        Category = Cat;
    }

    void PrintDetails(){
        cout << "Game Name is : " << GameName << endl;
        cout << "Game Category is : " << Category << endl;
    }
};

int main(){
    Game G1("The Last Of Us","Thriller");
    Game G2("Evil Within 2","Horror");
    Game G3("Counter Strike Global Offensive","Competitive");
    G1.PrintDetails();
    G2.PrintDetails();
    G3.PrintDetails();

}