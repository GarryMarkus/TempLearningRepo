#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;      //creates an empty container
    v.push_back(1);     //since v is an empty container, it takes 1 into it
    v.emplace_back(2);  //similar to push_back but emplace_back is faster than push_back

    vector<pair<int, float>> vec;
    vec.push_back({1, 2});      //curly braces are required
    vec.emplace_back(5, 6);     //emplace automatically detects it to be a pair and no brackets

    vector<int> v2(5, 100); //vector v2 containing 5 instances of 100 is already defined
                        // v2 = {100, 100, 100, 100, 100}
    v2.push_back(4);    //v2 = {100, 100, 100, 100, 100, 4} size of v2 increases and new element 4 is added

    vector<int> v3(5);  //vector v2 containing 5 instances of 0 or garbage value is already defined
                        // 0 or garbage value depend upon the compiler

    vector<int> v4(v2);                 //vector v4 is created, it will be the exact copy of vector v2
    cout << v4[3] << " " << v4.at(3);   // two different ways of accessing an element in vector using indexes

    vector<int>::iterator it = v.begin(); 
    //datastructure<datatype>::iterator variable_name = variable_name.functi0n_name()
    // "it" will point to the memory location of the beginning index of vector v

    cout << endl << *(it) << endl;   //"it" will give the memory location
                                    //* before "it" will provide the element of the memory location
    it++;
    cout << *(it) << endl;

    vector<int>::iterator endit = v.end();  //end() doesn't point to the last element of the vector
                                            //end() points to the memory location just after the last element of the vector
                                            //we can say that end() points to a memory outside the vector
                                            //since we denote that endit points to where end() does, thus currently endit also points outside the vector
    cout << *(endit) << endl;   //gives a garbage value
    endit--; //now endit will point to last memory location of given vector v
    cout << *(endit) << endl;

    cout << v.back() << endl; //last element of vector v

    //printing elements of a vecotr using iterators
    for(vector<int>::iterator i = v4.begin(); i!=v4.end(); i++){
        cout << *(i) << " ";
    }
    cout << endl;
    
    //auto -----> automatically assigns the datatype to the variable accoding to the data

    //vector<int>::iterator it = v.begin(); -----> auto it = v.begin();
    
    for(auto i=v4.begin(); i<v4.end(); i++){
        cout << *(i) << " ";
    }
    cout << endl;

    for(auto i : v4){
        cout << i << " ";
    }
    cout << endl;

    //erasing in vector
    v4.erase(v4.begin()+5); //v4.begin() gives the address of the first element of vector v4
                            //since we have to delete the last element thus counting to it given "+5"
                            //thus, "v4.being()+5" inside v4.erase()

    //printing the vector to see if changes happen or not
    for(auto i : v4){
        cout << i << " ";
    }
    cout << endl;

    //to delete range of values
    //vector.erase("starting memory location", "ending memory location+1")
    v4.erase(v4.begin()+1, v4.begin()+4);   //three elements from the centre will be erased [start, end)

    for(auto i : v4){
        cout << i << " ";
    }
    cout << endl;


    //inserting in vector
    vector<int> v5(2, 100);     //v5 = {100, 100}
    v5.insert(v5.begin(), 300); //v5 = {300, 100, 100}, vector_name.insert(address, value)
    v5.insert(v5.begin()+1, 10, 900); //300 is added 10 times at the given memory location

    for(auto i : v5){
        cout << i << " ";
    }
    cout << endl;

    v5.pop_back(); //removes the last element

    for(auto i : v5){
        cout << i;
    }

    v5.swap(v4); //v4 becomes v5 and v5 becomes v4

    // v5.clear;   //v5 is empty

    return 0;
}

