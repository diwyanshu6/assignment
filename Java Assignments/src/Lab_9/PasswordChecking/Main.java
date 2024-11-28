package Lab_9.PasswordChecking;

public class Main {
    public static void main(String[] args) {
        Password pass=new Password("abcdef12");
        boolean isCorrect=pass.isApplicable();
        System.out.println(isCorrect);
    }
}
