package Lab_8.FigPackage;

 public abstract  class Figure {
    double r;
    double a;
    double v;
    double pi=3.1428;
     Figure(double r)
     {
         this.r=r;
     }
    public  abstract void calcArea();
    public abstract void calcVolume();
    public abstract void dispArea();
   public abstract  void dispVolume();
}
