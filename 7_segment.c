void main() {
            trisb = 0;
            portb = 0;
            trisd = 0;
            portd = 0;

            while(1){
              int i;
              int ar[10]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f} ;
                for(i=0; i<10 ; i++)
                {portb = ar[i];
                 delay_ms(500);
                 portd = ar[i+1];
                 delay_ms(500);
                }
            }
}