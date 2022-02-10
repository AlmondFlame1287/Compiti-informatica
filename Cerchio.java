package Cerchio;

public class Cerchio {
    private double r = 0;

    public void setRaggio(double r) {
        this.r = r;
    }

    public double area() {
        return (r * r * Math.PI);
    }

}
