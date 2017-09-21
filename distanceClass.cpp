// File: distanceClass
// Created by Trevor Newey on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
//Task: Define a class called distance.
//That stores int feet and float inches.
//Have 2 methods: setDist -> set information
//                getDist -> Set theinformation with customer input
//                showDist -> display value
// Constants, Structs, Classes
class Distance{
private:
    int feet;
    float inches;
public:
    float cm;
    void setDist(int f, float i){
        feet = f;
        inches = i;
    }
    void getDist(){
        cout << "\nEnter Feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showDist(){          //display information
        cout <<"Feet "<<feet<<" and inches "<<inches<<endl;
    }
};
// Prototypes

// Main Program Program
int main(void) {
//Create an instance
Distance d1,d2;
    //Use Methods to set/access data
    d1.setDist(6,6.5);
    cout <<"\nDist 1"<<endl;
    d1.showDist();

    d2.getDist();
    cout <<"\nDist 2"<<endl;
    d2.showDist();

    //access a public data member
    d2.cm = 8.3;
    cout <<"cm is "<< d2.cm<<endl;
    return 0;
}

// Function Definitions