#include <iostream>
using namespace std;
int main (){
    char ch;
    cin>>ch;

    switch(ch){
        case'n':
        case'N':
        cout<<"NORTH\n";
        break;
        //ab ye isse niche kaa print ni karega

        case'e':
        case'E':
        cout<<"EAST\n";
        //agr e press kruga to niche kaa sab print krega ye 

        case 's':
        case 'S':
        cout<<"SOUTH\n";

        case 'w':
        case 'W':
        cout<<"WEST\n";

        default:
        cout<<"KAHA JAKE MANEGA\n";

    }
}