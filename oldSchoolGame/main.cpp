#include <iostream>
#include <string>
#include "directedGraph.cpp"
#include <iomanip>
#include <time.h>
#include <stdlib.h>
using namespace std;


//gameWorld inhertis from directedGraph
class gameWorld : public directedGraph {
private:
    vertex *playerVertex;
    vertex *computerVertex;

public:
    void setPlayerLocation(string x) {
        playerVertex = findVertex(x);
        computerVertex = findVertex(x);
    }



    string getPlayerLocation() {
        return playerVertex->cityName;
    }

    string getComputerLocation() {
        return computerVertex->cityName;
    }

    void displayAllCities() {

        string display;

        for (int i = 0; i < 36; i++)
            if (computerVertex->mark == true) {
                cout << computerVertex->cityName;
            }
    }

    int player1 =300000;
    int player2 =300000;

    int fee;
    //try to move player to d
    //if d is a valid exit, return true and move player
    //if not, do not move player, return false
    void travelTo(int d, string name) {



        if(name=="Computer") {
            computerVertex = findVertex(d);
            computerVertex->map = "♖";
            if(computerVertex->mark==true) {
                cout << "Oppppppps! Computer needs to pay entrance fee!!" << endl;
                fflush(stdout);
                sleep(3);
                fee = computerVertex->cityPrice * 0.4;
                cout << "The entrance fee at " << computerVertex->cityName <<" is : " << fee << endl;
                player2 = player2 - fee;
                player1 = player1 + fee;
                cout << name <<" paid entrance " << fee << " fee"<<endl<<endl;
                fflush(stdout);
                sleep(3);
            }
            computerVertex->map = "♖";
            display();
            buyingOption(computerVertex, player2, name);
            computerVertex->mark = true;
        }else {
            playerVertex = findVertex(d);
            playerVertex->map = "✨";
            if(playerVertex->mark==true) {
                cout << "Oppppppps! You need to pay entrance fee!!" << endl;
                fflush(stdout);
                sleep(3);
                fee = playerVertex->cityPrice * 0.4;
                cout << "The entrance fee at " << computerVertex->cityName <<" is : " << fee << endl;
                player1 = player1 - fee;
                player2 = player2 + fee;
                cout << name <<" paid entrance " << fee << " fee"<<endl<<endl;
                fflush(stdout);
                sleep(3);
            }
            playerVertex->map = "✨";
            display();
            buyingOption(playerVertex, player1, name);
            playerVertex->mark = true;
        }

    }
    void thinking(){
        cout<<"T h ";
        fflush(stdout);
        sleep(1);
        cout<<"i n k ";
        fflush(stdout);
        sleep(1);
        cout<<"i n g ";
        fflush(stdout);
        sleep(1);
        cout<<". ";
        fflush(stdout);
        sleep(1);
        cout<<". ";
        fflush(stdout);
        sleep(1);
        cout<<". ";

        cout<<endl;
    }
    void buyingOption(vertex * x,int a, string name){
        string answer;
        cout<<endl<<endl<<"Would you like to buy the " <<x->cityName <<" city? (Y or N)"<<endl;
        cout<< x->cityName <<" city's price is " << x->cityPrice<<endl;

       if(name == "Computer"){
           cout<< "Computer have $" <<player2 <<endl;
       } else {
           cout<< "You have $" << player1 << endl;
       }


        if(x == computerVertex) {
            thinking();
            if (player2 < 10000) {
                answer = "n";
                cout << answer << endl;
            } else {
                answer = "y";
                cout << answer << endl;
            }
        }else {
            cin >> answer;
        }

        if(answer == "y" && "Y") {
            if (name == "Computer") {
                player2 = a - x->cityPrice;
                cout << "Computer bought " << x->cityName << "!" << endl << "Your have :" << player2<<endl;
                x->map = "♜";
                fflush(stdout);
                sleep(2);
            } else {
                player1 = a - x->cityPrice;
                cout << "You bought " << x->cityName << "!" << endl << "Your have :" << player1 << endl;
                x->map = "⭐";
                fflush(stdout);
                sleep(2);
            }
        }
    }



void gameEnd(bool checker){
    if(checker == false){
    cout<<"Thank you for playing the Monopoly game";
    }else{
        cout<<"Thank you for playing the Monopoly game";
        cout<<"Fianl score is :"<<endl <<"You have $" <<player1 <<endl <<"Computer has $" <<player2<<endl;
        if(player1>player2){
            cout<<" You Win ! ";

        }else {
            cout<<" Computer Win !";}
    }
    exit(0);
}



    void title(){
        cout<<"                                     ███╗   ███╗ ██████╗ ███╗   ██╗ ██████╗ ██████╗  ██████╗ ██╗     ██╗   ██╗"<<endl;
        cout<<"                                     ████╗ ████║██╔═══██╗████╗  ██║██╔═══██╗██╔══██╗██╔═══██╗██║     ╚██╗ ██╔╝"<<endl;
        cout<<"                                     ██╔████╔██║██║   ██║██╔██╗ ██║██║   ██║██████╔╝██║   ██║██║      ╚████╔╝"<<endl;
        cout<<"                                     ██║╚██╔╝██║██║   ██║██║╚██╗██║██║   ██║██╔═══╝ ██║   ██║██║       ╚██╔╝"<<endl;
        cout<<"                                     ██║ ╚═╝ ██║╚██████╔╝██║ ╚████║╚██████╔╝██║     ╚██████╔╝███████╗   ██║"<<endl;
        cout<<"                                     ╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚═╝      ╚═════╝ ╚══════╝   ╚═╝"<<endl;
    }

    void menu(){
        bool checker = false;
        cout<<"                                     ███╗   ███╗███████╗███╗   ██╗██╗   ██╗"<<endl;
        cout<<"                                     ████╗ ████║██╔════╝████╗  ██║██║   ██║"<<endl;
        cout<<"                                     ██╔████╔██║█████╗  ██╔██╗ ██║██║   ██║"<<endl;
        cout<<"                                     ██║╚██╔╝██║██╔══╝  ██║╚██╗██║██║   ██║"<<endl;
        cout<<"                                     ██║ ╚═╝ ██║███████╗██║ ╚████║╚██████╔╝"<<endl;
        cout<<"                                     ╚═╝     ╚═╝╚══════╝╚═╝  ╚═══╝ ╚═════╝"<<endl;


        cout<<"                                      ██╗       ████████╗██╗  ██╗██████╗  ██████╗ ██╗    ██╗    ████████╗██╗  ██╗███████╗    ██████╗ ██╗ ██████╗███████╗"<<endl;
        cout<<"                                     ███║       ╚══██╔══╝██║  ██║██╔══██╗██╔═══██╗██║    ██║    ╚══██╔══╝██║  ██║██╔════╝    ██╔══██╗██║██╔════╝██╔════╝"<<endl;
        cout<<"                                     ╚██║          ██║   ███████║██████╔╝██║   ██║██║ █╗ ██║       ██║   ███████║█████╗      ██║  ██║██║██║     █████╗"<<endl;
        cout<<"                                      ██║          ██║   ██╔══██║██╔══██╗██║   ██║██║███╗██║       ██║   ██╔══██║██╔══╝      ██║  ██║██║██║     ██╔══╝"<<endl;
        cout<<"                                      ██║██╗       ██║   ██║  ██║██║  ██║╚██████╔╝╚███╔███╔╝       ██║   ██║  ██║███████╗    ██████╔╝██║╚██████╗███████╗"<<endl;
        cout<<"                                      ╚═╝╚═╝       ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝  ╚══╝╚══╝        ╚═╝   ╚═╝  ╚═╝╚══════╝    ╚═════╝ ╚═╝ ╚═════╝╚══════╝"<<endl;



        cout<<"                                     ██████╗         ██████╗██╗  ██╗███████╗ ██████╗██╗  ██╗    ████████╗██╗  ██╗███████╗    ██████╗ ██╗   ██╗██████╗  ██████╗ ███████╗████████╗"<<endl;
        cout<<"                                     ╚════██╗       ██╔════╝██║  ██║██╔════╝██╔════╝██║ ██╔╝    ╚══██╔══╝██║  ██║██╔════╝    ██╔══██╗██║   ██║██╔══██╗██╔════╝ ██╔════╝╚══██╔══╝"<<endl;
        cout<<"                                      █████╔╝       ██║     ███████║█████╗  ██║     █████╔╝        ██║   ███████║█████╗      ██████╔╝██║   ██║██║  ██║██║  ███╗█████╗     ██║"<<endl;
        cout<<"                                     ██╔═══╝        ██║     ██╔══██║██╔══╝  ██║     ██╔═██╗        ██║   ██╔══██║██╔══╝      ██╔══██╗██║   ██║██║  ██║██║   ██║██╔══╝     ██║"<<endl;
        cout<<"                                     ███████╗██╗    ╚██████╗██║  ██║███████╗╚██████╗██║  ██╗       ██║   ██║  ██║███████╗    ██████╔╝╚██████╔╝██████╔╝╚██████╔╝███████╗   ██║"<<endl;
        cout<<"                                     ╚══════╝╚═╝     ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝  ╚═╝       ╚═╝   ╚═╝  ╚═╝╚══════╝    ╚═════╝  ╚═════╝ ╚═════╝  ╚═════╝ ╚══════╝   ╚═╝"<<endl;


        cout<<"                                     ██████╗         ██████╗  █████╗ ███╗   ███╗███████╗    ███████╗███╗   ██╗██████╗"<<endl;
        cout<<"                                     ╚════██╗       ██╔════╝ ██╔══██╗████╗ ████║██╔════╝    ██╔════╝████╗  ██║██╔══██╗"<<endl;
        cout<<"                                      █████╔╝       ██║  ███╗███████║██╔████╔██║█████╗      █████╗  ██╔██╗ ██║██║  ██║"<<endl;
        cout<<"                                      ╚═══██╗       ██║   ██║██╔══██║██║╚██╔╝██║██╔══╝      ██╔══╝  ██║╚██╗██║██║  ██║"<<endl;
        cout<<"                                     ██████╔╝██╗    ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗    ███████╗██║ ╚████║██████╔╝"<<endl;
        cout<<"                                     ╚═════╝ ╚═╝     ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝    ╚══════╝╚═╝  ╚═══╝╚═════╝"<<endl;

        cout<<"Enter the menu option :";
        int temp;
        cin >> temp;
        switch(temp){
            case 1: display(); checker = true; break;
            case 2:
                cout<<"You have : $" << player1<<endl;
                cout<<"Computer has : $"<<player2<<endl;
                break;
            case 3: gameEnd(checker); break;

        }
    }

    void menuChecker(bool check, string &name) {
        if (check == false) {
            cout << "Do you want to start the game? (y or n)" << endl;
            string temp;
            cin >> temp;
            if (temp == "y" && "Y") {
                check = true;
                if (name == "NULL") {
                    cout << "Hello! Please enter your name: " << endl;
                    cin >> name;
                } else {
                    menu();
                }
            } else {
                gameEnd(true);
            }
        }else menu();
    }



};
void throwing(){
    cout<<"T h ";
    fflush(stdout);
    sleep(1);
    cout<<"r o w ";
    fflush(stdout);
    sleep(1);
    cout<<"i n g ";
    fflush(stdout);
    sleep(1);
    cout<<". ";
    fflush(stdout);
    sleep(1);
    cout<<". ";
    fflush(stdout);
    sleep(1);
    cout<<". ";

    cout<<endl;
}

void buildWorld(gameWorld &w) {
    //top{
    w.addVertex("Start");
    w.addVertex("Taipei");
    w.addVertex("Golden Key");
    w.addVertex("HongKong");
    w.addVertex("Manila");
    w.addVertex("Jeju Island");
    w.addVertex("Singa pore");

    w.addVertex("Cairo");
    w.addVertex("Istanbul");
    //}

    //left{
    w.addVertex("Desert");
    w.addVertex("Atene");

    w.addVertex("Copenhagen");
    w.addVertex("Stockholm");
    w.addVertex("Concord");
    w.addVertex("Zurich");

    w.addVertex("Berlin");
    w.addVertex("Montriol");
    w.addVertex("Welfare");
    //}

    //right{
    w.addVertex("Buenos Aires");

    w.addVertex("Sao Paulo");
    w.addVertex("Sydney");
    w.addVertex("Busan");
    w.addVertex("Hawaii");
    w.addVertex("Lisbon");
    w.addVertex("Elizabeth");
    w.addVertex("Madrid");
    w.addVertex("Osaka");
    //}

    //bottom{
    w.addVertex("Tokyo");
    w.addVertex("Pusan");
    w.addVertex("Paris");
    w.addVertex("Rome");

    w.addVertex("London");
    w.addVertex("New York");
    w.addVertex("Seoul");
    w.addVertex("Brownsville");
    w.addVertex("Edinburg");
    //}
    w.addVertex("End");



    w.addDirectedEdge("Start", "Taipei");
    w.addDirectedEdge("Taipei", "Golden Key");
    w.addDirectedEdge("Golden Key", "HongKong");
    w.addDirectedEdge("HongKong", "Manila");
    w.addDirectedEdge("Manila", "Jeju Island");
    w.addDirectedEdge("Jeju Island", "Singa pore");
    w.addDirectedEdge("Singa pore", "Cairo");
    w.addDirectedEdge("Cairo", "Istanbul");
    //First line End;

    //right start
    w.addDirectedEdge("Istanbul", "Buenos Aires");
    w.addDirectedEdge("Buenos Aires", "Sao Paulo");

    w.addDirectedEdge("Sao Paulo", "Sydney");
    w.addDirectedEdge("Sydney", "Busan");
    w.addDirectedEdge("Busan", "Hawaii");
    w.addDirectedEdge("Hawaii", "Lisbon");
    w.addDirectedEdge("Lisbon", "Elizabeth");
    w.addDirectedEdge("Elizabeth", "Madrid");
    w.addDirectedEdge("Madrid", "Osaka");
    w.addDirectedEdge("Osaka", "Edinburg");
    //right end

    //bottom start
    w.addDirectedEdge("Edinburg", "Brownsville");
    w.addDirectedEdge("Brownsville", "Seoul");
    w.addDirectedEdge("Seoul", "New York");
    w.addDirectedEdge("New York", "London");
    w.addDirectedEdge("London", "Rome");
    w.addDirectedEdge("Rome", "Paris");
    w.addDirectedEdge("Paris", "Pusan");
    w.addDirectedEdge("Pusan", "Tokyo");

    //
    w.addDirectedEdge("Tokyo", "Welfare");

    w.addDirectedEdge("Welfare", "Montriol");
    w.addDirectedEdge("Montriol", "Berlin");
    w.addDirectedEdge("Berlin", "Zurich");
    w.addDirectedEdge("Zurich", "Concord");

    w.addDirectedEdge("Concord", "Stockholm");
    w.addDirectedEdge("Stockholm", "Copenhagen");
    w.addDirectedEdge("Copenhagen", "Atene");
    w.addDirectedEdge("Atene", "Desert");
    w.addDirectedEdge("Desert", "End");


   // w.addAllEdge("Golden Key");
}
void Sleep(float s)
{
    int sec = int(s*1000000);
    usleep(sec);
}
int main()
{
    bool start = false;
    gameWorld world;
    buildWorld(world);
    world.numbering();
    world.setPlayerLocation("Start");
    string name="NULL";
    string comname="Computer";


    world.title();
    world.menuChecker(start,name);





    int dice;

    int userDice=0;
    int comDice=0;
    userDice =+ dice;
    while(1) {

            //cout << name << ", you are at " << world.getPlayerLocation() << endl;

        cout<< name << ", you have $" << world.player1<<endl;
        fflush(stdout);
        sleep(3);
        world.menu();
        cout<<"Do you want to throw your dice?"<<"(y or n)"<<endl;
        string answer;
        cin>>answer;

        if(answer == "y" && "Y"){
            cout << "Throwing your dice!" << endl;
            throwing();
        } else{
            world.menuChecker(start,name);
        }

        srand((unsigned)time(0));
        dice = rand() % 6 + 1;
        cout << name << ", your dice number is: " << dice << endl;
        fflush(stdout);
        sleep(1);
        userDice = dice + userDice;
        world.travelTo(userDice, name);
        world.display();

        cout << name << ", you are at " << world.getPlayerLocation() << endl;
        fflush(stdout);
        sleep(3);
        world.display();

        cout << comname << "'s turn" << endl;
        sleep(3);
        srand((unsigned)time(0));
        dice = rand() % 6 + 1;

        comDice = dice + comDice;
        cout << "Throwing your dice!" << endl;
        throwing();
        cout << comname << ", your dice number is: " << dice << endl;

        world.travelTo(comDice, comname);
        cout << comname << ", you are at " << world.getComputerLocation() << endl;

        cout<<endl<<endl;

        if(dice >= 36 || comDice>=36){
            world.gameEnd(true);
        }

    }
    return 0;
}