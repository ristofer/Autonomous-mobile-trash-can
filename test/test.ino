#include "IRsensor.h"
#include "Motor.h"
#include "Mov.h"
#include "Ojos.h"
#include "Roboto.h"
#include "NewPing.h"



#define LMOTOR_CTL1 4
#define LMOTOR_CTL2 2
#define LMOTOR_PWM 5

#define RMOTOR_CTL1 12
#define RMOTOR_CTL2 13
#define RMOTOR_PWM 10




#define IRCENTRO 15
#define IRIZQ  16
#define IRDER  17
#define IRBABOR  18  //izquierda
#define IRESTRIBOR  19  //derecha
#define IRATRAS  14

bool frst = false;
bool scnd = false;

IRsensor ircentro(IRCENTRO) ;
IRsensor irizq(IRIZQ) ;
IRsensor irder(IRDER) ;

IRsensor iratras(IRATRAS) ;

NewPing sonar(3,4,200);



Motor mizquierdo(LMOTOR_CTL1,LMOTOR_CTL2,LMOTOR_PWM);
Motor mderecho(RMOTOR_CTL1,RMOTOR_CTL2,RMOTOR_PWM);

Mov autito(mizquierdo,mderecho);

Ojos ojos(ircentro,
           irizq,
           irder, 
           iratras );

Roboto tuber(autito,ojos,sonar);

void setup() {
  tuber.iniciar();

  Serial.begin(9600);
}

void loop() {
  tuber.dirigirse();
}
