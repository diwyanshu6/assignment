package Lab10.Database;

public class Dbargs {
    private static final String username = "root";
    private static final String pass = "5466";
    private static final String url = "jdbc:mysql://localhost:3306/oopslabassignment";

    public static String getUsername() {
        return username;
    }

    public static String getPass() {
        return pass;
    }

    public static String getUrl() {
        return url;
    }
}
