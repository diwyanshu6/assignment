package Lab10;

//Q.2) Create a graphical login and registration page using Java Swing, connecting to a
//MySQL database with JDBC. The program should allow users to register with a
//username, password, and email, and then log in using their credentials.

import Lab10.Database.Connect;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class Q2 extends JFrame implements ActionListener {
    JPanel p1;
    JLabel username;
    JLabel password;
    JFrame jFrame;
    JTextField username_input;
    JTextField password_input;
    JButton submit;
    JLabel empty;
    private static Connection con;


    public Q2()
    {
        con= Connect.connect();
        username=new JLabel("Username:");
        username.setFont(new Font("Arial",Font.BOLD,15));
        password=new JLabel("Password:");
        password.setFont(new Font("Arial",Font.BOLD,15));
        p1=new JPanel(new GridLayout(3,2,5,100));
        username_input=new JTextField();
        password_input=new JPasswordField();
        submit=new JButton("Submit");
        empty=new JLabel("");
        submit.setPreferredSize(new Dimension(50,50));
        p1.setSize(200,200);
        p1.setLocation(50,50);
        p1.add(username);
        p1.add(username_input);
        p1.add(password);
        p1.add(password_input);
        p1.add(empty);
        p1.add(submit);
        submit.addActionListener(this::actionPerformed);
        jFrame=new JFrame();
        jFrame.add(p1);
        jFrame.setSize(600,400);
        jFrame.setVisible(true);
        jFrame.setResizable(false);

    }
    @Override
    public void actionPerformed(ActionEvent e) {
            if(e.getSource()==submit)
            {
                String name=username_input.getText();
                String pass=password_input.getText();

                String query="SELECT password FROM user WHERE username= ?";
                try {
                    PreparedStatement ps = con.prepareStatement(query);
                    ps.setString(1,name);
                    ResultSet rs=ps.executeQuery();
                    if(rs.next())
                    {
                        //compare Passwords
                        if(rs.getString("password").equals(pass))
                        {
                            System.out.println("Login Successfull");
                        }
                        else
                        {
                            System.out.println("Invalid Password");
                        }
                    }
                    else {
                        System.out.println("User Not Found");
                    }
                } catch (SQLException ex) {
                    System.out.println(ex.getMessage());
                }
            }
    }

    public static void main(String[] args) {
        Q2 q=new Q2();
    }
}
