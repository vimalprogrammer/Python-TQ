import java.util.*;
import java.io.*;
import java.util.stream.Collectors;  
public class Main
{
	public static void main(String[] args) {
       Scanner won=new Scanner(System.in);
       String seq=won.nextLine();
       String sen=won.nextLine();
       if(!CheckUnique(seq))
       {
           System.out.println("New Language Error");
       }
       else{
          String arr[]=sen.split(" ");
          StringBuilder sb=new StringBuilder();  
          for(int i=0;i<arr.length;i++)
          {
              String str=arr[i];
              for(int j=0;j<seq.length();j++)
              {
                   for(int k=0;k<str.length();k++)
                   {
                    if(Character.toLowerCase(str.charAt(k))==Character.toLowerCase(seq.charAt(j)))
                          sb.append(seq.charAt(j));
                   }
              }
              if(i<arr.length-1)
              {
                  sb.append(" ");
              }
          }
          System.out.println(sb);
       }
       
  	}
  	public static boolean CheckUnique(String input) 
  	{
        Set<Character> set = new HashSet<>();
        char[] characters = input.toCharArray();

        for (Character c : characters) {
            if (!set.add(c)) 
                return false;
        }
    return true;
  }
}
