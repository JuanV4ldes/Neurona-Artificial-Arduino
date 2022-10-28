// Creado por Juan Valdés

void setup() {
  pinMode(1 , INPUT);
  pinMode(2 , INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  float X1 = digitalRead(1);
  float X2 = digitalRead(2);
  float salida= 0;
  float y = X1*0.5007152 + X2 * 0.49677032 + 0.24995881;

  if(y < 0){
    salida = 0;
  }else{
    salida = y;
  }

  boolean salidaFinal= 0;

  if(salida < 0.5){
    salidaFinal = 0;
  }else if(salida >= 0.5){
    salidaFinal = 1;
  }

  digitalWrite(3, salidaFinal);
  // pon tu codigo aqui para ejecutarlo repetidamente::

}
