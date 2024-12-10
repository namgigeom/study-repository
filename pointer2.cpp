#include <iostream>
using namespace std;

double addtion(double a,double *b){
    *b = a + (*b);
    return *b;
}

int main(){
    double a,b;
    addtion(a,&b);
    cout << "Input two number_";
    cin >> a >> b;
    cout << "a + b = " << addtion(a,&b) << endl;
    cout << "b = " << b;
    return 0;
}