import java.io.*;
class Palin
{
public static void main(String args [])throws IOException
{
BufferedReader in=new BufferedReader(new InputStreamReader (System.in));
String p="";
System.out.println("enter any number ");
String s=in.readLine();
for(int i=0;i<s.length();i++)
p=s.charAt(i)+p;
if(p.equals(s))
System.out.println("true");
else
System.out.println("false");
}
}