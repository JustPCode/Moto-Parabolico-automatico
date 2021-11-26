#include <iostream>
using namespace std;

int main() {
//Dichiarazione
auto Sx;
auto Sy;
auto V;
auto g = 9.81;
auto t;

//Input Valori
cout << "Input Sx, if none input /" <<endl;
cin >> Sx;

cout << "Input Sy, if none input /" <<endl;
cin >> Sy;

cout << "Input V, if none input /" << endl;
cin >> V;

cout << "Input g, if none input /" << endl;
cin >> g;

cout << "Input t, if none input /" << endl;
cin >> t;

//Data check!
int z = 0;

    if (Sx == "/") {z++; };
    if (Sy == "/") {z++; };
    if (V == "/") {z++; };
    if (g == "/") {z++; };
    if (t == "/") {z++; };
    
if (z<2){
    cout << "Not enough data, please retry." << endl;}
    
else {z = 0; }

//Formule MRU
do {
    if (Sx == "/", V != "/", t != "/") {Sx = V * t; }  
    if (V == "/", Sx != "/", t != "/") {V = Sx / t; }
    if (t == "/", Sx != "/", V != "/") {t = Sx / V; }
     
//Formule MUA
    if (Sy == "/", t != "/", g != "/") {Sy = g / 2 * t^2; }
    if (t == "/", Sy != "/", g != "/") {t = (2 * Sy / g)^1/2; }
//  if (g == "/", Sy != "/", t != "/") {g = ; }

//Break the rule!  
    z++;
    if (z > 5) {
        cout << "I need a brake, please retry" << endl;}

} while (Sx == "/"; Sy == "/"; V == "/"; t == "/"};
//Output
    cout << "OUTPUT:" << std::endl;
    cout << "Sx = " << Sx << "m" << endl;
    cout << "Sy = " << Sy << "m" << endl;
    cout << "V = "  << V  << "m/s" << endl;
    cout << "t = "  << t  << "s" << endl;
    cout << "g = "  << g  << "m/s" << endl;