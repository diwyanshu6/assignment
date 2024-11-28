package Java_practice;

class Object {
    void display() {
        System.out.println("Display Function");
    }
}

class String_handling {
    public static void main(String[] args) {
//        StringBuffer s1 = new StringBuffer("Iron Man");
//        StringBuffer s2 = new StringBuffer("Iron Man");
//        Integer a = s1.compareTo(s2);
//        System.out.println(a == 0);
//        System.out.println(s1.equals(s2)); //doesn't work for string buffer

        String s1 = "Iron Man";
        System.out.println(s1.startsWith("Iron"));
        System.out.println(s1.lastIndexOf('n'));
        String s2 = "iron man";
        System.out.println(s1.equalsIgnoreCase(s2));
        System.out.println(s1.concat(s2));
        Object o = new Object();
        o.display();
    }
}
