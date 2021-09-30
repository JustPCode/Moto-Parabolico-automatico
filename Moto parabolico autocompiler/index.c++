#include <IOStream>
using namespace std;

void setup {
    auto Sx;
    auto Sy;
    auto V;
    int a = 9,81;
    auto t;

    int z = 0 }

auto inpSx {
    cout << "insert Sx (m) or /" << endl;
    cin >> auto inp1 >> endl;
    return inp1 };

auto inpSy {
    cout << "insert Sy (m) or /" << endl;
    cin >> auto inp2 >> endl;
    return inp2 };

auto inpV {
    cout << "insert V (m/s) or /" << endl;
    cin >> auto inp3 >> endl;
    return inp3 };

auto inpt {
    cout << "insert t (s) or /" << endl;
    cin >> auto inp4 >> endl;
    return inp4 };


int main {
    inpSx ();
    if (inpSx == "/") {
        z++ };
    
    inpSy ();
    if (inpSy == "/") {
        z++ };

    inpV ();
    if (inpV == "/") {
        z++ };

    inpt ();
    if (inpt == "/") {
        z++ };

if (z<2){
    cout << "Not enough data, please retry." << endl;
    exit (abort-not_enough_data);
    else z = 0 };

do {
//  Formule MRU
    if (Sx == "/", V != "/", t != "/") {Sx = V*t };
    
    if (V == "/", Sx != "/", t != "/") {V = };
    if (t == "/", Sx != "/", V != "/") {t = };
     
//  Formule MUA
    if (Sy == "/", t != "/") {Sy = a/2*t^2};

    if (t == "/", Sy != "/") {t = };

//  Break the rule!  
    z++;
    if (z > 5) {
        exit (abort-to_much_calc.)};
    
} while (Sx != /, Sy != /, V != /, t != /,);
    cout << "La distanza dal punto di partenza (Sx) è di " Sx "m" <<endl;
    cout << "L'altezza (Sy) è di " Sy "m" <<endl;
    cout << "La velocità impiegata (V) è di " V "m/s" <<endl;
    cout << "Il tempo impiegato per toccare terra (t) è di " t "s"  <<endl;
    cout << "L'accellerazione di gravità (g/a) è di " a "m/s" <<endl;
    
    exit (code success!)};