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
    //Contructor with no arguments //this is used if no parameters are used
    Distance(): feet(0), inches(0){
        //empty body
    }
    //contructor with 2 arguments //this is used if parameters are put in
    Distance(int ft, float in): feet(ft), inches(in){
        //empty body
    }
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
    void add_Distance(Distance d1, Distance d2){
        Distance add_dist_tome(Distance d1);
    }
};
// Prototypes

// Main Program Program
int main(void) {
//Create an instance
    Distance d1;
    Distance d2(8,2);
    Distance d3(2,4);
    cout <<"\nd1 = ";
    d1.showDist();
    cout <<"\nd2 = ";
    d2.showDist();
    cout <<"\nd3 = ";
    d3.showDist();
    Distance d4.add_Distance(d2,d3);
    cout <<"\nd4 = ";
    d4.showDist();
    d4 = d4.add_dist_tome(d2);
    cout <<"\nd4 new = ";
    d4.showDist();
    return 0;
}

// Function Definitions
//1. Declare prototype inside calss.
//2. Definition is outside class
//3. Use the scope resolution operator ::
void Distance::add_Distance(Distance d1, Distance d2){//This belongs to the class. (Method for members only)  Classname::functionName
    inches = d1.inches + d2.inches; //add inches
    feet = 0;
    if(inches >=12.0){
        inches -= 12;            //check for extra foot
        feet++;                  //add feet
    }
    feet += d1.feet + d2.feet;
}
Distance Distance::add_dist_tome(Distance d1){
    Distance temp;
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12.0){
        temp.inches -= 12.0;
        temp.feet = 1;
    }
    temp.feet += feet + d1.feet;

    return temp;
}