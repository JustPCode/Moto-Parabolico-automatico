#include <iostream>
using namespace std;

// input function
double inpSx()
{
    double Sx = 0.0;
    cout << "Input Sx, if none enter 0" << endl;
    cin >> Sx;
    return Sx;
}

double inpSy()
{
    double Sy = 0.0;
    cout << "Input Sy, if none enter 0" << endl;
    cin >> Sy;
    return Sy;
}

double inpV()
{
    double V = 0.0;
    cout << "Input V, if none enter 0" << endl;
    cin >> V;
    return V;
}

double inpg()
{
    double g = 9.81;
    cout << "Input g, if none enter 0" << endl;
    cin >> g;
    return g;
}

double inpt()
{
    double t = 0.0;
    cout << "Input t, if none enter 0" << endl;
    cin >> t;
    return t;
}

// main program
int main () {double Sx = 0.0, Sy = 0.0, V = 0.0, g = 9.81, t = 0.0;
    cout << "=== Programma avviato per Moto parabolico ===" << endl;

    // input valori
    Sx = inpSx();
    Sy = inpSy();
     V = inpV ();
     g = inpg ();
     t = inpt ();

// confirmation
    cout << "This are the value" << endl;
    cout << "Sx = " << Sx << endl;
    cout << " g = " << g << endl;
    cout << "Sy = " << Sy << endl;
    cout << " t = " << t << endl;
    cout << " V = " << V << endl;

// Formule MRU
do {




x++;
} while (x < 5);

    return 1;
}



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

} while (Sx == "/", Sy == "/", V == "/", t == "/");};
//Output
    cout << "OUTPUT:" << endl;
    cout << "Sx = " << Sx << "m"   << endl;
    cout << "Sy = " << Sy << "m"   << endl;
    cout << "V = "  << V  << "m/s" << endl;
    cout << "t = "  << t  << "s"   << endl;
    cout << "g = "  << g  << "m/s" << endl;