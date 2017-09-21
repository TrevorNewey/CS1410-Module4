// File: PointClass
// Created by Trevor Newey on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
// Constants, Structs, Classes
class Point{
        private:
            float x;
            float y;
        public:
    //Constructor
    Point(): x(0.0), y(0.0)                //this is setting where the number will start counting.
    {/*empty body*/};

    //Methods
            void showPoint(){
                cout << "x = "<<x<<endl;
                cout << "y = "<<y<<endl;
            }
            void updatePoint(float xnew, float ynew){
                cout << "x = "<<xnew<<endl;
                cout << "y = "<<ynew<<endl;
            }
};
// Prototypes

// Main Program Program
int main(void) {
Point p1;
    p1.showPoint();         //show values
    p1.updatePoint(2.5,3.9);//update values
    p1.showPoint();         //show values again

    return 0;
}

// Function Definitions