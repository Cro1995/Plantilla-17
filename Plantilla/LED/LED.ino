/****************************************************************
 **                                                            **
 **                    LED                                     **                                                           
 **                    LED                                     **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 23/01/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

pinMode 2


 //************************* SETUP ******************************

void setup() {          // configura el final de salida 
 pinMode(2, OUTPUT);    // ASSIGNEM QUINA SORTIDA FAREM SERVIR  

}

//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  digitalWrite(2, HIGH);  //indiquem que la sortida la posem en marcha 
  delay(500);             // indiquem el temps que té d'esperar
  digitalWrite(2, LOW)    //indiquem que la sortida la aturem 
  delay(500);             //indiquem el temps que té d'esperar 

}


//************************* FUNCIONS ****************************

