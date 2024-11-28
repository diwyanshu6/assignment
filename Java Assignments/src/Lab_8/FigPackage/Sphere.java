package Lab_8.FigPackage;

public class Sphere extends Figure {

    Sphere(double r)
    {
        super(r);
    }
    public void calcArea(){
        a=4*pi*r*r;
    }

    public  void calcVolume(){
        v=4*pi*r*r*r/3;
    }
    public void dispArea(){
        System.out.println("Area of Sphere: " + a);
    }
    public void dispVolume(){
        System.out.println("Volume of Sphere: " + v);
    }
}