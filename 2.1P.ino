int led = D7;
int dash = 1500;
int dot = 500;
int T[1] = {dash};
int H[4] = {dot, dot, dot, dot};
int O[3] = {dash, dash, dash};
int M[2] = {dash, dash};
int A[2] = {dot, dash};
int S[3] = {dot, dot, dot};

void blink(int time[], int num) {
    for (int i = 0; i < num; i++)
    {
        digitalWrite(led, HIGH);
        delay(time[i]);
        digitalWrite(led, LOW);
        delay(time[i]);    
    }
    delay(dash);
}

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    blink(T, 1);
    blink(H, 4);
    blink(O, 3);
    blink(M, 2);
    blink(A, 2);
    blink(S, 3);
    delay(3500);
}
