#include<bits/stdc++.h>
using namespace std;

class Hero{

    //getter and setter for private properties
    private:
    int level;

    public: 
    int getLevel(){
        return level;
    }

    int setLevel(int l){
        level = l;
    }

    public:

    //a constructor names as h1.Hero() will get created and called automatically, if we create it ourself then it will execute the constructor ceated by us

    Hero(){
        cout << endl << endl << endl << endl << "constructor cerated" << endl << endl << endl << endl << endl;
    }


    //properties, public by default
    int health = 9;
};

int main(){

    //object creation: statically
    Hero h1;

    cout << "size of h1 is " << sizeof(h1) << endl;

    int l1;
    cout << "enter desired level value ";
    cin >> l1;

    h1.setLevel(l1);
    cout << "level of h1 is " << h1.getLevel() << endl;


    //dyanmically creating an object
    Hero *h2 = new Hero;
    cout << "size of h2 is " << sizeof((*h2)) << endl;
    

    int l2;
    cout << "health of h2 is " << h2->health << endl;

    cout << "enter desired level value ";
    cin >> l2;    

    (*h2).setLevel(l2);
    cout << "level of h2 is " << (*h2).getLevel() << endl;
    cout << "or " << h2->getLevel();

    

    return 0;
}