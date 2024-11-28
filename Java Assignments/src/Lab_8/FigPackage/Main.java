package Lab_8.FigPackage;

public class Main {
    public static void main(String[] args) {
        //creating a Cone
       Figure cone= new Cone(1,2,3);
        cone.calcArea();
        cone.calcVolume();
        cone.dispArea();
        cone.dispVolume();

        //Creating a Sphere
        Figure sphere=new Sphere(1);
        sphere.calcArea();
        sphere.dispArea();
        sphere.calcVolume();
        sphere.dispVolume();


        //Creating a Cylinder
        Figure cylinder=new Cylinder(1,5);
        cylinder.calcArea();
        cylinder.calcVolume();
        cylinder.dispArea();
        cylinder.dispVolume();

    }
}
