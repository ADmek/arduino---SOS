int czas = 500;void setup(){  pinMode(13, OUTPUT);}void loop(){    for (int i = 0; i < 3; i = i + 1){        digitalWrite(13, HIGH);         delay(300);        digitalWrite(13, LOW);         delay(czas);    }            for (int a = 0; a < 3; a = a + 1){        digitalWrite(13, HIGH);         delay(2000);        digitalWrite(13, LOW);         delay(czas);    }        for (int b = 0; b < 3; b = b + 1){        digitalWrite(13, HIGH);         delay(300);        digitalWrite(13, LOW);         delay(czas);    }        delay(3000);}