//zpráva synchronizující komunikaci
byte messageSync[] = {0xF1, 0x02, 0x00, 0x50, 0x93};
//zpráva vracející počet vzorkovaných článků
byte messagerespodNumOfcells[] = {0x81, 0x00, 0x0D, 0x01, 0xED, 0x6C}; //works
//91 00 14 00 23FC
byte messageDisablBall[] = {0x91, 0x00, 0x20, 0x00, 0x35, 0x3C};

//Zpráva která přečte registry, vrací hodnoty nastavené podle adesy kanálu
byte messageReadVoltage1[] = {0xE1, 0x02, 0x00, 0x51, 0x56};

//Nastavení vzorkovací frekvence ADC
byte messageSetSampleRate[] = {0x91, 0x00, 0x62, 0xFF, 0x45, 0xDC};

// Adresy kanálů napětí
 byte messageSetSampledChannels1[] = {0x94, 0x00, 0x03, 0x10, 0x00, 0x00, 0x00, 0x95, 0x09 }; // adresa13
 byte messageSetSampledChannels2[] = {0x94, 0x00, 0x03, 0x20, 0x00, 0x00, 0x00, 0x9A, 0x09 };  // adresa14
 byte messageSetSampledChannels3[] = {0x94, 0x00, 0x03, 0x08, 0x00, 0x00, 0x00, 0x93, 0xA9}; // adresa1
 byte messageSetSampledChannels4[] = {0x94, 0x00, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0xF9}; // adresa2
 byte messageSetSampledChannels5[] = {0x94, 0x00, 0x03, 0x02, 0x00, 0x00, 0x00, 0x90, 0x71}; // adresa3
 byte messageSetSampledChannels6[] = {0x94, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x90, 0x35}; // adresa4
 byte messageSetSampledChannels7[] = {0x94, 0x00, 0x03, 0x00, 0x80, 0x00, 0x00, 0x90, 0x21}; // adresa5
 byte messageSetSampledChannels8[] = {0x94, 0x00, 0x03, 0x00, 0x40, 0x00, 0x00, 0x90, 0xD1}; // adresa6
 byte messageSetSampledChannels9[] = {0x94, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x90, 0x03}; // adresa7
 byte messageSetSampledChannels10[] = {0x94, 0x00, 0x03, 0x00, 0x10, 0x00, 0x00, 0x90, 0x0C}; // adresa8
 byte messageSetSampledChannels11[] = {0x94, 0x00, 0x03, 0x00, 0x08, 0x00, 0x00, 0x10, 0x0B}; // adresa9
 byte messageSetSampledChannels12[] = {0x94, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0xD0, 0x08}; // adresa10
 byte messageSetSampledChannels13[] = {0x94, 0x00, 0x03, 0x00, 0x02, 0x00, 0x00, 0x30, 0x09}; // adresa11
 byte messageSetSampledChannels14[] = {0x94, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0xC0, 0x09}; // adresa12
// Adresy kanálů teplotních čidel

 byte messageSetSampledChannels17[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x80, 0x00, 0xF0, 0x09}; //x 
 byte messageSetSampledChannels18[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x40, 0x00, 0xA0, 0x09}; //tep1
 byte messageSetSampledChannels19[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x20, 0x00, 0x88, 0x09}; //tep 2
 byte messageSetSampledChannels20[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x10, 0x00, 0x9C, 0x09}; //tep 3
 byte messageSetSampledChannels21[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x08, 0x00, 0x96, 0x09}; // tep 4
 byte messageSetSampledChannels22[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x04, 0x00, 0x93, 0x09}; //tep 5
 byte messageSetSampledChannels23[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x02, 0x00, 0x90, 0xA9}; //tep 6
 byte messageSetSampledChannels24[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x01, 0x00, 0x90, 0x59}; // tep 7
 byte messageSetSampledChannels25[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x80, 0x90, 0x69}; // adresa25 x
 byte messageSetSampledChannels26[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x40, 0x90, 0x39}; // adresa26 x
 byte messageSetSampledChannels27[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x90, 0x11}; // adresa27 x
 byte messageSetSampledChannels28[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x10, 0x90, 0x05}; // adresa28 tep1
 byte messageSetSampledChannels29[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x90, 0x0F}; // adresa29 x
 byte messageSetSampledChannels30[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x90, 0x0A}; // adresa30 x
 byte messageSetSampledChannels31[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x10, 0x08}; // adresa31 x
 byte messageSetSampledChannels32[] = {0x94, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x50, 0x09}; // adresa32 x



bool TempFlag = 0;
bool UnderVoltageFlag = 0;
bool contactor = 0;


String data = " "; // string obsahující přečtená data kanálu
String AllData = " "; // soubor všech hodnot na čtených kanálech, pro výpis
String StringToPrint = " ";
int currentChannel = 0; // Index aktuálního kanálu


double resistance = 0;
double temperature = 0;



void setup() {
  Serial.begin(250000);
  Serial1.begin(250000);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  delay(1000);
  Serial.println("wake up");
  digitalWrite(5, HIGH);
  delay(2000);
  Serial.println("sending message");
  delay(1000);
  Serial1.write(messageSetSampleRate, sizeof(messageSetSampleRate));
  delay(1000);
  //inicializace displaye
  delay(100);
   
    
}

void loop() {

if(TempFlag == 1){
  //vypnutí stykače
    digitalWrite(11, LOW);
    contactor = 0;
}

if(UnderVoltageFlag == 1){
  //vypnutí stykače
    digitalWrite(11, LOW);
}

  
  ChannelWrite(currentChannel);
  delay(100);
  Serial1.write(messageReadVoltage1, sizeof(messageReadVoltage1));
  delay(100);
  while (Serial1.available()) {
    while (Serial1.available()) {
    
    data += String(Serial1.read(),HEX);
    
   }
 
   data.remove(6);
   data.remove(1,1);
   unsigned int decValue = strtol(data.c_str(), NULL, 16);
   double voltage = 2.0 * 2.5 / 65535.0 * decValue;
  if (currentChannel > 14) {
      resistance = calculateResistance(voltage);
      temperature = calculateTemperature(resistance);
 
 //Vztyčení flagu o přehřáítí
      if(temperature > 63){
        TempFlag = 1;
        }
    }
 /*
   StringToPrint += "Cell";
   StringToPrint += (currentChannel + 1);
   StringToPrint += ":";
   if(currentChannel < 15){
   StringToPrint += String(voltage,3);
   */
   
  if(currentChannel < 14){
   StringToPrint += "Cell";
   StringToPrint += (currentChannel + 1);
   StringToPrint += ":";

//vztyčení flagu o podvybití
  if(voltage < 3){
    UnderVoltageFlag = 1;
    }
   
   StringToPrint += String(voltage,3);
  }
   if(currentChannel > 13){
   StringToPrint += "Temp";
   StringToPrint += (currentChannel +1);
   StringToPrint += ":";
   StringToPrint += String(temperature,3);
   }
  
//výpis aktuálního kanálu na terminal, jeho reset a přidání do celkového řetězce
    Serial.println(StringToPrint);
     AllData += StringToPrint;
    StringToPrint = " ";

  //reset proměnné data a inkrementace pro měření dalšího kanálu
   data = " ";
   currentChannel++;

   //reset měřeného kanálu
   if(currentChannel>20){
     currentChannel = 0;
   //výpis dat na display
    Serial.println(AllData);
    
    //reset stringu obsahující napětí článků a teploty
    AllData = "";
   }
   }
   
   if(TempFlag == 0 & UnderVoltageFlag == 0){
        digitalWrite(11, HIGH);
   }
}
   
void ChannelWrite(int ChannelAdress){
  switch(ChannelAdress){
    case 0:
      Serial1.write(messageSetSampledChannels1, sizeof(messageSetSampledChannels1));
      break;
    case 1:
      Serial1.write(messageSetSampledChannels2, sizeof(messageSetSampledChannels2));
      break;
    case 2:
      Serial1.write(messageSetSampledChannels3, sizeof(messageSetSampledChannels3));
      break;
    case 3:
      Serial1.write(messageSetSampledChannels4, sizeof(messageSetSampledChannels4));
      break;
    case 4:
      Serial1.write(messageSetSampledChannels5, sizeof(messageSetSampledChannels5));
      break;
    case 5:
      Serial1.write(messageSetSampledChannels6, sizeof(messageSetSampledChannels6));
      break;
    case 6:
      Serial1.write(messageSetSampledChannels7, sizeof(messageSetSampledChannels7));
      break;
    case 7:
      Serial1.write(messageSetSampledChannels8, sizeof(messageSetSampledChannels8));
      break;
    case 8:
      Serial1.write(messageSetSampledChannels9, sizeof(messageSetSampledChannels9));
      break;
    case 9:
      Serial1.write(messageSetSampledChannels10, sizeof(messageSetSampledChannels10));
      break;
    case 10:
      Serial1.write(messageSetSampledChannels11, sizeof(messageSetSampledChannels11));
      break;
    case 11:
      Serial1.write(messageSetSampledChannels12, sizeof(messageSetSampledChannels12));
      break;
    case 12:
      Serial1.write(messageSetSampledChannels13, sizeof(messageSetSampledChannels13));
      break;
    case 13:
      Serial1.write(messageSetSampledChannels14, sizeof(messageSetSampledChannels14));
      break;   
    case 14:
      Serial1.write(messageSetSampledChannels18, sizeof(messageSetSampledChannels18));
      break;  
    case 15:
      Serial1.write(messageSetSampledChannels19, sizeof(messageSetSampledChannels19));
      break;   
    case 16:
      Serial1.write(messageSetSampledChannels20, sizeof(messageSetSampledChannels20));
      break;
    case 17:
      Serial1.write(messageSetSampledChannels21, sizeof(messageSetSampledChannels21));
      break;
    case 18:
     Serial1.write(messageSetSampledChannels22, sizeof(messageSetSampledChannels22));
      break;   
    case 19:
      Serial1.write(messageSetSampledChannels23, sizeof(messageSetSampledChannels23));
      break;  
    case 20:
      Serial1.write(messageSetSampledChannels24, sizeof(messageSetSampledChannels24));
      break;   
    
  }
}

double calculateTemperature(double resistance) {
  double R25 = 100000.0;    // Hodnota odporu při 25°C
  double B25_50 = 3950.0;   // Hodnota B při 25/50°C

  double invTemperature = 1.0 / (1.0 / 298.15 + (1.0 / B25_50) * log(resistance / R25));
  double temperature = invTemperature - 273.15; // Převod na °C
  return temperature;
}
double calculateResistance(double voltage) {
  // Přepočet na odporový dělič se známou hodnotou rezistoru
  double resistorValue = 100000.0; // Hodnota rezistoru v ohmech
  double resistance = resistorValue * voltage / (5 - voltage);
  return resistance;
}

 
