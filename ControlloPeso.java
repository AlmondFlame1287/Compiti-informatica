import java.util.Scanner;

public class ControlloPeso {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		final int pesoNorma = 500;
		
		float peso = 0f;
		int tolleranzaPercentuale = 0;
		float tolleranza = 0;
		int nonInNorma = 0;
		int inNorma = 0;
		
		// Fase di input
		System.out.println("Inserisci la tolleranza: ");
		tolleranzaPercentuale = scan.nextInt();
			
		while(true) {		
			System.out.println("Inserisci il peso del pacco di pasta: ");
			peso = scan.nextFloat();
			
			tolleranza = (tolleranzaPercentuale / 100) * peso;
			
			if(peso + tolleranza > pesoNorma)
				nonInNorma++;
			else if(peso + tolleranza <= pesoNorma)
				inNorma++;
			
			if(nonInNorma == 5) break;
		}
		
		System.out.println("La percentuale di errore e': " + ( ((float)nonInNorma / (inNorma + nonInNorma)) * 100));
	}
}