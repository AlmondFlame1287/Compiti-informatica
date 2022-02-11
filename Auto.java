package dio;

public class Auto {
    private int vel = 0;

    public void accel() {
        this.vel += controllaVelAccel(5);
    }

    public void frena() {
        this.vel -= controllaVelFrenata(10);
    }

    private int controllaVelFrenata(int v) {
        if(this.vel - v > 0) return v;

        System.out.println("Non puoi frenare da fermo");

        return 0;
    }

    private int controllaVelAccel(int v) {
        if(this.vel + v <= 90) return v;

        System.out.println("Stai andando troppo forte, rallenta!");
        return 0;
    }

    public void start() {
        this.vel = 50;
    }

    public void stampaVel() {
        System.out.println("Stai andando a " + this.vel + " km/h");
    }
}
