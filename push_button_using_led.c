void main() {
            trisB.f0 = 0;
            trisC.f0 = 1;
            portc = 0;
            portb = 0;

            while(1){
              if(portc.f0==1)
              {portb.f0=1;}
              else
              {portb.f0= 0;}
            }
}