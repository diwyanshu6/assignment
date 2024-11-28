package Lab_9.PasswordChecking;

import static java.lang.Character.*;

public class Password {
    private String password;
    private int length;
    Password(String password)
    {
        this.password=password;
        this.length=password.length();
    }

   private boolean checkLowerCase()
    {

        for(int i=0;i<length;i++)
        {
            if(isLowerCase(password.charAt(i)))
            {
               return true;
            }
        }
        return false;
    }

   private boolean checkDigit()
    {
        for(int i=0;i<length;i++)
        {
            if(isDigit(password.charAt(i)))
                return true;
        }
        return false;
    }
   private boolean checkUpper()
    {
        for (int i=0;i<length;i++)
        {
            if(isUpperCase(password.charAt(i)))
                return false;
        }
        return true;
    }
     private boolean checkLength()
    {
        if(length>=5 && length<=12)
            return true;
        else
            return false;
    }
    public boolean isApplicable()
    {
        if( checkLowerCase() && checkDigit() &&checkLength() && checkUpper() )
                return true;
        return false;
    }

}
