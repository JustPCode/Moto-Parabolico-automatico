void setup() {
    Serial.begin(9600);

//  Replace the 0 with the data without their
//  unit of mesure (9.81 instead of 9,81m/s)
    char Sx = '/';
    char Sy = '/';
    char V = '/';
    char g = 9.81;
    char t = '/';

//data check
    int z = 0;
    if (isAscii(Sx)) {z++; }
    if (isAscii(Sy)) {z++; }
    if (isAscii(V)) {z++; }
    if (isAscii(t)) {z++; }
    if (z<2){
        Serial.print("/!\ Data error, please retry /!\ \n");
        return; }    
    
    else {
    z = 0;
    do {
//Formule MRU
    if (isAscii(Sx) && isDigit(V) && isDigit(t)) {Sx = V * t; }  
    if (isAscii(V) && isDigit(Sx) && isDigit(t)) {V = Sx / t; }
    if (isAscii(t) && isDigit(Sx) && isDigit(V)) {t = Sx / V; }
     
//Formule MUA
    if (isAscii(Sy) && isDigit(t)) {Sy = g / 2 * t^2; }
    if (isAscii(t) && isDigit(Sy)) {t = (2 * Sy / g)^1/2; }

//Break the rule!  
    z++;
    if (z > 5) {
    Serial.print("/!\ I need a brake, please retry /!\ \n");
        return; }

} while (isAscii(Sx) || isAscii(Sy) || isAscii(V) || isAscii(t)); }

//Output
    Serial.print("OUTPUT: \n");
    Serial.print("Sx = ") (Sx) (" m \n");
    Serial.print("Sy = ") (Sy) (" m \n");
    Serial.print("V = ") (V) (" m/s \n");
    Serial.print("t = ") (t) (" s \n");
    Serial.print("g = ") (g) (" m/s \n"); }

void loop() {}