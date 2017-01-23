/****************************************************************
 **                                                            **
 **                    LEDpolsador                             **                                                           
 **                    LEDpolsador                             **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 23/01/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

pinMode 2
pinMode 4


 //************************* SETUP ******************************

void setup() {          // configura el final de salida 
  pinMode(2, OUTPUT);   //asignem la sortida  
  pinMode(4, INPUT);    //asignem la entrada

}

//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  if(digitalRead(4){   // llegeix com està la entrada 
    digitalWrite(2, HIGH); // posa la entrada a 1
  }else{
  digitalWrite(2, LOW);  // posa la entrada a 0 
  }

}


//************************* FUNCIONS ****************************

