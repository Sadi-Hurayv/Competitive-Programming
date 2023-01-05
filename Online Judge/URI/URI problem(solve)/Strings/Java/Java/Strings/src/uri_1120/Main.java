package uri_1120;

import java.io.IOException;
import java.util.Scanner;

public class Main {
	
	public static void main(String args[]) throws IOException
	{
		String D = null, N = null;
		Scanner input = new Scanner(System.in);
		D=input.next();
		N=input.next();
		//System.out.println(D+" "+N);
		
		
		while((!(D.equals("0"))) && (!(N.equals("0"))))
		{
			N=N.replace(D, "");
			//System.out.println(N);
			if(N.length()==0)
			{
				System.out.println("0");
			}	
			else
			{
				int min=110, temp;
				String arr= "0123456789";
				for(int i=1; i<10; i++)
				{
					temp=N.indexOf(arr.charAt(i));
					if(temp!=-1)
					{
						if(temp<min)
						{
							min=temp;
						}
					}
				}
				
				if(min==110)
				{
					System.out.println("0");
				}
				else
				{
					System.out.println(N.substring(min));
				}
				//System.out.println(Integer.parseUnsignedInt(N));
			}
			D=input.next();
			N=input.next();
			//System.out.println(D+" "+N);
		}
	}

}
