#include <iostream>
using namespace std;

class smallobj{             //This is a class
private:
    int somedata;           //class data
public:
    void setdata(int d){    //member function to set data
        somedata = d;
    }
    void showdata(){       //member function to display/get data
        cout<<"Data is " << somedata << endl;
    }
};
int main() {

    //Create instances of the class (instance means member)
    smallobj s1, s2;
    //Error: you can't access your data directly. you must use an access method.
    //cout << "Some data is" <<s1.somedata << endl;
    //set my data
    //Dot operator -> class member access operator
    s1.setdata(123);
    s1.showdata();
    s2.setdata(456);
    s2.showdata();
    return 0;
}