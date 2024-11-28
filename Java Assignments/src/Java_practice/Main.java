package Java_practice;

interface Car {
    int wheel = 4;

    void engine(); //by default abstract or public in interface

    void speed();
}

abstract class Base_Alto implements Car {
    @Override
    public void engine() {
        System.out.println("Petrol Engine");
    }
}

class Alto extends Base_Alto implements Car {
    @Override
    public void engine() {
        System.out.println("Diesel Engine");
    }

    @Override
    public void speed() {
        System.out.println("Speed = 100m/s");
    }
}

public class Main {
    public static void main(String[] args) {
        Alto a = new Alto();
        a.engine();
        Base_Alto base_alto = new Alto();
        base_alto.engine();
        base_alto.speed();
    }
}