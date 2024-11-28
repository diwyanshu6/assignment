package Java_practice;

public class Wrapper_classes {
    public static void main(String[] args) {
        int a = 3;
        Integer b = a; //autoboxing (primitive to class)
        float d = b.floatValue();
        float c = (float) b;//simple casting
        System.out.println(c);
        System.out.println(b.doubleValue());
    }

}
