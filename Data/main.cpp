#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

// input function
double inpSx()
{
    double Sx = 0.0;
    cout << " Input Sx (m), if none enter 0" << endl;
    cout << "> Sx = "; cin >> Sx;
    cout << endl;
    return Sx;
}

double inpSy()
{
    double Sy = 0.0;
    cout << " Input Sy (m), if none enter 0" << endl;
    cout << "> Sy = "; cin >> Sy;
    cout << endl;    
    return Sy;
}

double inpV()
{
    double V = 0.0;
    cout << " Input V (m/s), if none enter 0" << endl;
    cout << ">  V = "; cin >> V;
    cout << endl;
    return V;
}

double inpg()
{
    double g = 9.81;
    cout << " Input g (m/s), if none enter 0" << endl;
    cout << ">  g = "; cin >> g;
    cout << endl;
    return g;
}

double inpt()
{
    double t = 0.0;
    cout << " Input t (s), if none enter 0" << endl;
    cout << ">  t = "; cin >> t;
    cout << endl;
    return t;
}

// main program
int main()
{
    double Sx = 0.0, Sy = 0.0, V = 0.0, g = 9.81, t = 0.0;
    system("CLS");
    cout << "=== Programma avviato per Moto parabolico ===" << endl;

    // input valori
    Sx = inpSx();
    Sy = inpSy();
    V = inpV();
    g = inpg();
    t = inpt();

    // confirmation
    system("CLS");
    cout << "=== Programma avviato per Moto parabolico ===" << endl;
    cout << " This are the value inputted" << endl;
    cout << "> Sx = " << Sx << endl;
    cout << "> Sy = " << Sy << endl;
    cout << ">  V = " << V << endl;
    cout << ">  g = " << g << endl;
    cout << ">  t = " << t << endl;
    

    // Formule
    for (int x = 0; x < 5; x++)
    {
        // Formule MRU
        if (Sx == 0)
        {
            Sx = V * t;
        }

        if (V == 0)
        {
            
            V = Sx / t;
        }

        if (t == 0)
        {
            t = Sx / V;
        }
        
        // Formule MRUA
        if (Sy == 0)
        {
            Sy = pow(g / 2 * t, 2);
        }

        if (t == 0)
        {
            t = sqrt(2 * Sy / g);
        }

        //  if (g == 0) {g = ;}
    }
    
    cout << endl;
    cout << " This are the final result" << endl;
    cout << "  Sx = " << Sx << " m" << endl;
    cout << "  Sy = " << Sy << " m" << endl;
    cout << "   V = " << V << " m/s" << endl;
    cout << "   t = " << t << " s" << endl;
    cout << "   g = " << g << " m/s" << endl;
    cout << endl;
    cout << endl;

    return 1;
}