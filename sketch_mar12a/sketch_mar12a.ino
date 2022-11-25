int anzahl = 1; //hier kannst du eingeben wie oft es ausgegeben werden soll
int status = 0;

void setup() {

  Serial.begin(9600);
}

void loop() {
  
  if (status==0){
    
    for(; anzahl==0; anzahl-=1) {

        Serial.println("HelloWorld");
    }

    status=1;
  }
}

