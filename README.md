<h1>Projeto Arduino e PWM</h1>

<h2>O que é PWM?</h2> 

<p>A modulação por largura de pulso (PWM) é uma técnica utilizada para controlar a quantidade média de energia entregue a um dispositivo eletrônico.</p>

<h2>Componentes necessários:</h2> 

<p>Arduino Nano.</p>
<p>Botão.</p>
<p>Célula de Energia.</p>
<p>L293D.</p>
<p>Motor.</p>
<p>Resistor.</p>
<p>Osciloscópio.</p>
<p>Voltímetro DC.</p>

<h2>Esquemático:</h2> 

<h2>Código fonte:</h2> 

<p> 
#include <Arduino.h>

int button = 2;
int state = 0;
int speed = 0;

void setup()
{
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  int button_state = digitalRead(button);

  if (button_state == 1)
  {
    analogWrite(9, speed);
    state = state + 1;
    delay(500);

    if (state == 1)
    {
      speed = speed + 64;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 2)
    {
      speed = speed + 63;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 3)
    {
      speed = speed + 64;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 4)
    {
      speed = speed + 64;
      analogWrite(9, speed);
      delay(1500);
    }
    else if (state == 5)
    {
      speed = speed - 255;
      analogWrite(9, speed);
      delay(1500);
    }
  }
  else
  {
    analogWrite(9, speed);
    delay(200);
  }
}
</p>

<h2>Instruções de montagem:</h2> 

<p>Para montar o circuito, deve-se seguir as seguintes intruções:</p>

<p>
1° - Conectar uma das entradas do botão à porta 2 do Arduino Nano e conectar a outra à célula de energia. Conectar as portas 10 e 9 do Arduino Nano às portas 7 e 2 do L293D, respectivamente.
2° - Abaixo do botão, como mostrado na figura, conectar uma das entradas do resistor à ligação do botão e aterrar a outra ponta.  
3° - Conectar uma das entradas do motor à porta 3 do L293D e aterrar a outra. 
4° - Conectar as portas 1, 9, 8 e 16 do L293D conforme indicado na imagem. Também aterrar a porta GND do L293D. 
5° - Concetar o Voltímentro DC e o Osciloscópio conforme indicado na imagem. 

<h2>Funcionamento do projeto:</h2> 

<p>
Ao precionar o botão uma vez, a velocidade do motor aumenta para 64.
Ao precionar o botão uma segunda vez, a velocidade do motor aumenta para 127.
Ao precionar o botão uma terceira vez, a velocidade do motor aumenta para 191.
Ao precionar o botão uma quarta vez, a velocidade do motor aumenta para 255. 
A velocidade do motor irá se manter a mesma até que o botão seja precionado. 
</p> 
