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
int main()
{
    double Sx = 0.0, Sy = 0.0, V = 0.0, g = 9.81, t = 0.0;
    cout << "=== Programma avviato per Moto parabolico ===" << endl;

    // input valori
    Sx = inpSx();
    Sy = inpSy();
    V = inpV();
    g = inpg();
    t = inpt();

    // confirmation
    system("clear");
    cout << "=== Programma avviato per Moto parabolico ===" << endl;
    cout << "=== This are the value inputted           ===" << endl;
    cout << "Sx = " << Sx << endl;
    cout << " g = " << g << endl;
    cout << "Sy = " << Sy << endl;
    cout << " t = " << t << endl;
    cout << " V = " << V << endl;

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
            Sy = g / 2 * t ^ 2;
        }
        if (t == 0)
        {
            t = (2 * Sy / g) ^ 1 / 2;
        }
        //  if (g == 0) {g = ;}
    }
    cout << "=== This are the result            ===" << endl;
    cout << "Sx = " << Sx << endl;
    cout << " g = " << g << endl;
    cout << "Sy = " << Sy << endl;
    cout << " t = " << t << endl;
    cout << " V = " << V << endl;
    return 1;
}

cout << "OUTPUT:" << endl;
cout << "Sx = " << Sx << "m" << endl;
cout << "Sy = " << Sy << "m" << endl;
cout << "V = " << V << "m/s" << endl;
cout << "t = " << t << "s" << endl;
cout << "g = " << g << "m/s" << endl;
