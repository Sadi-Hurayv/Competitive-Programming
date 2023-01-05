package uri_2653;

import java.io.IOException;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {
	
	public static void main(String[] args)throws IOException{
		Scanner sc = new Scanner(System.in);
		LinkedList <String> ll = new LinkedList<>();
		
		try {
			String st = sc.nextLine();
			while( st != null)
			{
				if(ll.contains(st)==false)
				{
					ll.add(st);
				}
				st=sc.nextLine();
			}
		}catch(Exception e) {
			
			System.out.println(ll.size());
			
		}
		
	}

}
