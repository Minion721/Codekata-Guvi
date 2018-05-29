import java.util.*;
class P1
{
	Scanner scan=new Scanner(System.in);
	String sk;
	void getd()
	{
	sk=scan.nextLine();
	StringBuffer sb=new StringBuffer(sk);
	String s1=sb.reverse().toString();
	if(s1.equals(sk))
	
		System.out.print("YES");
	else
		System.out.print("NO");
	
	}
	
}
public class palindrome
{

	public static void main(String[] args)
	{
		P1 p=new P1();
		p.getd();
	}

}
