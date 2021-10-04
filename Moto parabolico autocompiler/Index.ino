int setup {
//  Insert data without their unit of mesure (9,81 instead of 9,81m/s)
    int Sx = ;
    int Sy = ;
    int V = ;
    int a = 9,81;
    int t = ;
    int z = 0; };

int main {
//  data check
    if (Sx == " ") {z++ };
    if (Sy == " ") {z++ };
    if (V == " ") {z++ };
    if (t == " ") {z++ };
    if (z<2){
        Serial.print("/!\ Not enough data, please retry /!\ ");
        Serial.print("\n");
        return(abort-not_enough_data);
    exit {z = 0 };

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
    Serial.print("/!\ Not enough data, please retry /!\ ");
    Serial.print("\n");
        exit (abort-to_much_calc)};
    
} while (Sx != /, Sy != /, V != /, t != /,);
//  output
    Serial.print("Output:");
    Serial.print("\n\n");
    Serial.print("La distanza dal punto di partenza (Sx) è di " Sx "m");
    Serial.print("\n");
    Serial.print("L'altezza (Sy) è di " Sy "m");
    Serial.print("\n");
    Serial.print("La velocità impiegata (V) è di " V "m/s");
    Serial.print("\n");
    Serial.print("Il tempo impiegato per toccare terra (t) è di " t "s");
    Serial.print("\n");
    Serial.print("L'accellerazione di gravità (g, a) è di " a "m/s");
    Serial.print("\n");

void loop() {}