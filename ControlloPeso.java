/**
 * Scrivi un programma che effettui il controllo sul peso di confezioni di pasta impacchettate 
 * manualmente da un gruppo di operatori. 
 * Inserendo la percentuale di tolleranza e il valore nominale della confezione,
 * il programma deve segna­lare se il pacchetto rientra nella norma oppure deve essere scartato. 
 * Dopo aver individuato 5 pacchetti "fuori norma", il programma dovrà terminare 
 * in­dicando la percentuale di errori di impacchettamento.
 */

import java.util.Scanner;

public class ControlloPeso {
	public static void main(String[] args) {

        // Il peso norma sara' di 500 grammi

		Scanner scan = new Scanner(System.in);
        int percentualeTolleranza = 0;
        int pesoConfezione = 0;
        float numeroTolleranza = 0f;
        int inNorma = 0;
        int nonInNorma = 0;

        System.out.println("Qual'e' la percentuale della tolleranza?: ");
        percentualeTolleranza = scan.nextInt();

        while(true) {
            System.out.print("Qual'e' il peso della confezione?: ");
            pesoConfezione = scan.nextInt();

            numeroTolleranza = (float)(percentualeTolleranza * 100) / pesoConfezione;

            if(pesoConfezione <= 500 + numeroTolleranza && pesoConfezione >= 500 - numeroTolleranza)
                inNorma++;
            else
                nonInNorma++;

            if(nonInNorma == 5)
                break;
        }

		System.out.println("La percentuale di errore e': " + ( ((float)nonInNorma / (inNorma + nonInNorma)) * 100));

        scan.close();
	}
}
