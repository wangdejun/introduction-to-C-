#include <stdio.h>
#include <iostream>
using namespace std;

class Bug{
    private:
        int nLegs;
        int nColor;
    public:
        int nType;
        Bug(int legs, int color);
        void PrintBug(){
            cout<<"-----"<<endl;
        };
};

class FlyBug: public Bug{
    int nWings;
    public:
        FlyBug(int legs, int color, int wings);
};

Bug::Bug(int legs, int color){
    nLegs = legs;
    nColor = color;
}
/*
FlyBug::FlyBug(int legs, int color, int wings){
    nType = 1;
    nWings = wings;
}
*/

//call the constructor function in Base Class;
//derived class constructor -> BaseClass's constructor provide the arguments;
//derived::derived(arg_derived-list):base(arg_base-list)
FlyBug::FlyBug(int legs, int color, int wings):Bug(legs, color){
    nWings = wings;
}

int main(){
    FlyBug fb(2,3,4);
    cout<<"1---------------->"<<endl;
    fb.PrintBug();
    fb.nType = 1;
    // fb.nLegs = 2;
    cout<<"2---------------->"<<endl;    
    return 0;
}