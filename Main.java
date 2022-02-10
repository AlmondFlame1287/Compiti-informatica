package Cerchio;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Cerchio c1 = new Cerchio();

        c1.setRaggio(3);

        System.out.println("Area del cerchio = " + c1.area());
        scan.close();
    }
}
