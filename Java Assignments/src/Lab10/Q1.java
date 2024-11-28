package Lab10;

import javax.swing.*;
import java.awt.*;
import java.sql.Time;
import java.text.SimpleDateFormat;
import java.util.Date;

class DigitalClock{

    public DigitalClock()
    {

        JLabel currentTime = new JLabel("00:00:00", SwingConstants.CENTER);
        JFrame JFrame = new JFrame("Digital Clock");
        JFrame.setSize(500,500);
        JFrame.add(currentTime);
        currentTime.setFont(new Font("Arial", Font.BOLD,24));
        Timer timer=new Timer(1000,e->{
            String currtime=new SimpleDateFormat("HH:mm:ss").format(new Date());
            currentTime.setText(currtime);
        });
        timer.start();
        JFrame.setVisible(true);
    }
}

public class Q1 {
    public static void main(String[] args) {
        DigitalClock dc=new DigitalClock();
    }

}
