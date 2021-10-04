void setup {
//  Insert data without their unit of mesure (9,81 instead of 9,81m/s)
    int Sx;
    int Sy;
    int V;
    int a = 9,81;
    int t;
    int z = 0; };

int main {
//  data check
    if (Sx == " ") {
        z++ };

    if (Sy == " ") {
        z++ };

    if (V == " ") {
        z++ };

    if (t == " ") {
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
        exit (abort-to_much_calc)};
    
} while (Sx != /, Sy != /, V != /, t != /,);
//  output
    cout << "La distanza dal punto di partenza (Sx) è di " Sx "m" <<endl;
    cout << "L'altezza (Sy) è di " Sy "m" <<endl;
    cout << "La velocità impiegata (V) è di " V "m/s" <<endl;
    cout << "Il tempo impiegato per toccare terra (t) è di " t "s"  <<endl;
    cout << "L'accellerazione di gravità (g/a) è di " a "m/s" <<endl;
    
    exit (code_success)};

    void loop() {}