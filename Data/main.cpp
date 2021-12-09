#include <iostream>
using namespace std;

auto inpSx () {auto Sx = 0.0;
    cout << "Input Sx, if none press enter" << endl;
    cin >> Sx;
    return Sx;
}

auto inpSy () {auto Sy = 0.0;
    cout << "Input Sy, if none press enter" << endl;
    cin >> Sy;
    return Sy;
}

auto inpV () {auto V = 0.0;
    cout << "Input V, if none press enter" << endl;
    cin >> V;
    return V;
}

auto inpg () {auto g = 9.81;
    cout << "Input g, if none press enter" << endl;
    cin >> g;
    return g;
}

auto inpt () {auto t = 0.0;
    cout << "Input t, if none press enter" << endl;
    cin >> t;
    return t;
}

int main () {auto Sx = 0.0, Sy = 0.0, V = 0.0, g = 9.81, t = 0.0;
    cout << "=== Welcome to \"Moto parabolico\" ===" << endl;
    Sx = inpSx();
    Sy = inpSy();
     V = inpV ();
     g = inpg ();
     t = inpt ();

    cout << Sx;
    cout << Sy;
    cout <<  V;
    cout <<  g;
    cout <<  t;

    return 1;
}