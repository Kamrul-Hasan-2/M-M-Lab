void main() {
    trisa = 0;
    trisb = 0;
    trisc = 0;
    trisd = 0;
    porta = 0;
    portb = 0;
    portc = 0;
    portd = 0;
    while(1){
        int i,j,k,m;
        int ar[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f} ;
        for(m=0;m<3;m++){
            porta=ar[m];

            for(i=0; i<10 && !(m == 1 && i == 3); i++) {
                portb = ar[i];

                for(j=0; j<6; j++){
                    portc = ar[j];
                    for(k=0; k<11; k++){
                        delay_ms(60);
                        portd = ar[k];
                    }
                }
            }
        }
    }
}
