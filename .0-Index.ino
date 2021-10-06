void setup() {
    Serial.begin(9600);

//  Replace the 0 with the data without their unit of mesure (9,81 instead of 9,81m/s)
    float Sx = 0;
    float Sy = 0;
    float V = 0;
    float a = 9.81;
    float t = 0;

//DON'T TOUCH THIS!!
    int z = 0;}

int check {
//data check
    if (Sx == " ") {z++ }
    if (Sy == " ") {z++ }
    if (V == " ") {z++ }
    if (t == " ") {z++ }
    if (z<2){
        Serial.print("/!\ Not enough data, please retry /!\ ");
        Serial.print("\n");
        return(abort-not_enough_data);
    exit {z = 0 };

do {
//Formule MRU
    if (Sx == "/", V != "/", t != "/") {Sx = V*t };  
    if (V == "/", Sx != "/", t != "/") {V = Sx/t};
    if (t == "/", Sx != "/", V != "/") {t = Sx/V};
     
//Formule MUA
    if (Sy == "/", t != "/") {Sy = a/2*t^2};
    if (t == "/", Sy != "/") {t = rad(2*Sy/a)};

//Break the rule!  
    z++;
    if (z > 5) {
    Serial.print("/!\ Not enough data, please retry /!\ ")
    Serial.print("\n")
        exit ()}
} while (Sx != /, Sy != /, V != /, t != /,)
//Output
    Serial.print("Output: \n\n")
    Serial.print("La distanza dal punto di partenza (Sx) è di " Sx "m \n")
    Serial.print("L'altezza (Sy) è di " Sy "m \n")
    Serial.print("La velocità impiegata (V) è di " V "m/s \n")
    Serial.print("Il tempo impiegato per toccare terra (t) è di " t "s \n")
    Serial.print("L'accellerazione di gravità (g, a) è di " a "m/s \n")
}

void loop() {}