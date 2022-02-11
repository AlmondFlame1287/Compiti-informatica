package dio;

import java.util.Scanner;

public class UsaAuto {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Auto a1 = new Auto();
        String scelta;

        a1.start();

        while(true) {
            System.out.println("A = accel, F = frena, E = esci");
            scelta = scan.next();
            scelta = scelta.toLowerCase();
            if(scelta.startsWith("a")) 
                a1.accel();
            else if(scelta.startsWith("f")) 
                a1.frena();
            else if(scelta.startsWith("e"))
                break;
                
            a1.stampaVel();
            
        }

        scan.close();
    }
}
