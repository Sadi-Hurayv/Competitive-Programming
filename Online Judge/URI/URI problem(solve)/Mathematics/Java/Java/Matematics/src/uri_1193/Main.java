package uri_1193;

import java.util.Scanner;

public class Main {
	
	public static void main(String args[])
	{
		int n=0;
		String num, type;
		Scanner input = new Scanner(System.in);
		n=input.nextInt();
		for(int i=1; i<=n; i++)
		{
			num=input.next();
			type=input.next(); 
			System.out.println("Case " + i + ":");
			if(type.equals("bin"))
			{
				System.out.println(baseConversion(num, 2, 10) + " dec");
				System.out.println(baseConversion(num, 2, 16) + " hex");
			}
			else if(type.equals("dec"))
			{
				System.out.println(baseConversion(num, 10, 16) + " hex");
				System.out.println(baseConversion(num, 10, 2) + " bin");
			}
			else if(type.equals("hex"))
			{
				System.out.println(baseConversion(num, 16, 10) + " dec");
				System.out.println(baseConversion(num, 16, 2) + " bin");
			}
			System.out.println();
		}
	}
	
	public static String baseConversion(String number, int sBase, int dBase) 
	{ 
	
		return Integer.toString(Integer.parseInt(number, sBase), dBase); 
	} 

}
