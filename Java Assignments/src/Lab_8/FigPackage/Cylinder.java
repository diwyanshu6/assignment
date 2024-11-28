package Lab_8.FigPackage;

public class Cylinder extends Figure {
    double h;

    Cylinder(double r ,double h)
    {
        super(r);
        this.h=h;
    }
    public void calcArea(){
        a=(2*pi*r*r)+(2*pi*r*h);
    }

    public  void calcVolume(){
        v=pi*r*r*h;
    }
    public void dispArea(){
        System.out.println("Area of Cylinder: " + a);
    }
    public void dispVolume(){
        System.out.println("Volume of Cylinder: " + v);
    }
}
