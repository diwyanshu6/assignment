package FreuencyAlphabet;

public class FrequencyChar {
    String s;
    FrequencyChar(String s)
    {
        this.s=s;
    }
    Integer[] characterArray()
    {
        Integer[] charArray= new Integer[26];
        for(int i=0;i<26;i++)
            charArray[i]=0;
        for(int i=0;i<s.length();i++)
        {
             int index=s.charAt(i)-'a';
             charArray[index]++;
        }
        return charArray;
    }
}
