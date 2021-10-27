void setup() {
    Serial.begin(9600);

//  Replace the 0 with the data without their
//  unit of mesure (9.81 instead of 9,81m/s)
    auto Sx = "/";
    auto Sy = "/";
    auto V = "/";
    auto g = 9.81;
    auto t = "/";

//data check
    int z = 0;
    if (Sx == "/") {z++; }
    if (Sy == "/") {z++; }
    if (V == "/") {z++; }
    if (t == "/") {z++; }
    if (z<2){
        Serial.print("/!\ Data error, please retry /!\ \n");
        return; }    
    
    else {
    z = 0;
    do {
//Formule MRU
    if (Sx == "/", V != "/", t != "/") {Sx = V * t; }  
    if (V == "/", Sx != "/", t != "/") {V = Sx / t; }
    if (t == "/", Sx != "/", V != "/") {t = Sx / V; }
     
//Formule MUA
    if (Sy == "/", t != "/") {Sy = g / 2 * t^2; }
    if (t == "/", Sy != "/") {t = (2 * Sy / g)^1/2; }

//Break the rule!  
    z++;
    if (z > 5) {
    Serial.print("/!\ I need a brake, please retry /!\ \n");
        return; }

} while (Sx == "/" || Sy == "/" || V != "/" || t != "/"); }

//Output
    Serial.print("OUTPUT: \n");
    Serial.print("Sx = ") (Sx) (" m \n");
    Serial.print("Sy = ") (Sy) (" m \n");
    Serial.print("V = ") (V) (" m/s \n");
    Serial.print("t = ") (t) (" s \n");
    Serial.print("g = ") (g) (" m/s \n"); }

void loop() {}