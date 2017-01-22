/****************************************************************
 **                                                            **
 **                    Blink                                   **                                                           
 **                    ENCESA DE LED                           **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 22/01/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

pin 13


 //************************* SETUP ******************************

void setup() {          // configura el final de salida 
  pinMode(13, OUTPUT);  // asignem una variable 

}

//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  digitalWrite(13, HIGH);   // llegeix la ordre i encen el led 
  delay(1000);              // s'espera un segon 
  digitalWrite(13, LOW);    // llegeix la ordre i posa el led a zero 
  delay(1000);              // s'espera un segon 

}


//************************* FUNCIONS ****************************

