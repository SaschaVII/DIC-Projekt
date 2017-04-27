#ifndef tmp101_h
#define tmp101_h

class TMP101{
    public:
    int temperatur;
    private:
    //Adresse des Temperatursensors
    int adresse;
    //Obere Alarmgrenze
    int oGr;
    //Untere Alarmgrenze
    int uGr;
    
    public:
    TMP101();
    
    //Initialisiert den Sensor mit einer Standardadresse
    void init();
    //Sensor initialisieren
    void init(int aAdresse);
    
    void setAdresse(int aAdresse);
    
    
    //Temperatur vom Sensor lesen
    void setTemp(int gr,int aTemp);
    
    //Prüfen, welchen Wert man bekommt un dwas am meisten Sinn macht
    int readtemp();
};
#endif