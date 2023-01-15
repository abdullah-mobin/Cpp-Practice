#include<iostream>
using namespace std;

int add (int a, int b){
    return a+b;
}   

int add (int a, int b, int c){
    return a+b+c;
}   // by diffrent quantity of Parameter 

double add (int a, double b){
    return a+b;
}   // by diffrent data type Parameter 

int main()
{
    int a,b,c;
    cin >> a >> b >> c ;

    cout << add (a ,b) << endl;
    cout << add (a, b, c) << endl;
    cout << add (a, 3.2) << endl;
    return 0;
}
