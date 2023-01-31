int timer_quente = 0;
int timer_frio = 0;

// Função de soma - função será chamada pela interrupção
void func_soma(void){
  timer_quente = timer_quente + 1000;
  Serial.println("Aumentando Temp°");
  Serial.println("Tempos");
  timer_frio = timer_frio - 1000;
  if (timer_frio <= 0){
    timer_frio = 1000;
  }
  Serial.println(timer_frio);
  Serial.println(timer_quente);
}

// Função de subtração - função será chamada pela interrupção
void func_sub(void){
  timer_quente = timer_quente - 1000;
  Serial.println("Diminuindo Temp°");
  Serial.println("Tempos");
  timer_frio = timer_frio + 1000;
  if (timer_quente <= 0){
    timer_quente = 1000;
  }
  Serial.println(timer_frio);
  Serial.println(timer_quente);
}


void setup() {
  //iniciando conexão serial
  Serial.begin(9600);
  //configurando os pinos/entradas para PULLUP
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  timer_quente = 3000;
  timer_frio = 3000;

  attachInterrupt(digitalPinToInterrupt(2), func_soma, FALLING); //fazendo os vinculos a interrupção
  attachInterrupt(digitalPinToInterrupt(3), func_sub, FALLING);

}
void loop() {

  digitalWrite(LED_BUILTIN, LOW);
  delay(timer_frio);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(timer_quente);

}