package Lab_8.FigPackage;

public class Cone extends Figure {
 double h,s;

    public Cone(double r, double h, double s)
    {
        super(r);
        this.s=s;
        this.h=h;
    }
     public void calcArea(){
        a=pi*r*h;
    }

    public  void calcVolume(){
        v=pi*r*r*h/3;
    }
    public void dispArea(){
        System.out.println("Area of Cone: " + a);
    }
    public void dispVolume(){
        System.out.println("Volume of Cone: " + v);
    }
}
