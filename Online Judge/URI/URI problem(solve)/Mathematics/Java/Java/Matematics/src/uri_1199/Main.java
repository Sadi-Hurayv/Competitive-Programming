package uri_1199;

import java.util.Scanner;

public class Main {
	
	public static void main(String args[])
	{
		String num;
		Scanner input = new Scanner(System.in);
		while(true)
		{
			num = input.next();
			char sign, type = 0;
			sign=num.toString().charAt(0);
			if(num.length()>1)
			{
				type=num.toString().charAt(1);
			}
			
			if(sign=='-')
			{
				break;
			}
			else if(type=='x')
			{
				System.out.println(baseConversion(num.substring(2), 16, 10));
			}
			else
			{
				System.out.println("0x"+baseConversion(num, 10, 16).toUpperCase());
			}
		}
	}
	
	public static String baseConversion(String number, int sBase, int dBase) 
	{ 
	
		return Integer.toString(Integer.parseInt(number, sBase), dBase); 
	} 

}
