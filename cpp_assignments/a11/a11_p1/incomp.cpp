#include <iostream>
#include <string>
using namespace std;

BOX::BOX(){
    width = depth = height = 0;
}

BOX::BOX(double h, double w, double d){
    height = h;
    width = w;
    depth = d;
}

BOX::BOX(const BOX& h, const BOX& w, const BOX& d){
    strcpy(height, h.height);
    strcpy(width, w.width);
    strcpy(depth, d.depth);
}

BOX::~BOX(){
    cout << "DESTRUCTOR CALLED" << endl;
}

getheight(){
    return height;
}

getwidth(){
    return width;
}

getdepth(){
    return depth; 
}