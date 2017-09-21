// File: counter
// Created by Trevor Newey on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
// Constants, Structs, Classes
class Counter{
private:
    unsigned int count;
public:
    //Constructor
    Counter(): count(0)                //this is setting where the number will start counting.
    {/*empty body*/};
    void incrementCount(){//Increment count
        count++;
    }
    int getCount(){//return count
        return count;
    }
};
// Prototypes

// Main Program Program
int main(void) {
Counter c1,c2;

    cout<<"\nc1="<<c1.getCount(); //display                              //Since both of these is using different
                                                                         //Objects the data is rest to normal for each
                                                                         //of them
    c1.incrementCount();  //increment c1
    cout<<"\nc1="<<c1.getCount(); //display again

    cout<<"\nc2="<<c2.getCount(); //display
    c2.incrementCount();  //increment c2
    cout<<"\nc2="<<c2.getCount(); //display again


    return 0;
}

// Function Definitions