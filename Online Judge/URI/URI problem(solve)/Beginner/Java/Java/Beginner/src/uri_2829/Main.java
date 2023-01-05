package uri_2829;

import java.io.IOException;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {
	
	public static void main(String args[]) throws IOException
	{
		int t;
		LinkedList<String>ll = new LinkedList<String>();
		Scanner input = new Scanner(System.in);
		
		t = input.nextInt();
		for(int i=0; i<t; i++)
		{
			ll.add(input.next());
		}
		int size=t;
		
		marge_Sort(ll,size);
		
		for(int i=0; i<size; i++)			
		{
			System.out.println(ll.get(i));
		}
		
	}

	private static void marge_Sort(LinkedList<String> ll,int size) {
		if(size<2)
		{
			return;
		}
		int mid = size/2;
		LinkedList<String>left = new LinkedList<String>();
		LinkedList<String>right = new LinkedList<String>();
		
		for(int i=0; i<mid; i++)
		{
			left.add(ll.get(i));
		}
		
		for(int i=mid; i<size; i++)
		{
			right.add(ll.get(i));
		}
		
		marge_Sort(left, mid);
	    marge_Sort(right, size-mid);
	    marge(left, mid, right, size-mid, ll);
		
	}

	private static void marge(LinkedList<String> left, int left_Size, LinkedList<String> right, int right_Size,
			LinkedList<String> ll) {
		// TODO Auto-generated method stub
		ll.clear();
		int i=0, j=0, k=0;
	    while(i<left_Size && j<right_Size)
	    {
	        if(left.get(i).compareToIgnoreCase(right.get(j))<0)
	        {
	        	ll.add(left.get(i));
	            i++;
	        }
	        else if(left.get(i).compareToIgnoreCase(right.get(j))>0)
	        {	
	        	ll.add(right.get(j));
	            j++;
	        }
	        else if(left.get(i).compareToIgnoreCase(right.get(j))==0)
	        {
	        	if(left.get(i).compareTo(right.get(j))<0)
		        {
		        	ll.add(left.get(i));
		            i++;
		        }
		        else if(left.get(i).compareTo(right.get(j))>0)
		        {	
		        	ll.add(right.get(j));
		            j++;
		        }
	        }
	        
	    }
	    while(i<left_Size)
	    {
	    	ll.add(left.get(i));
	        i++;
	    }
	    while(j<right_Size)
	    {
	    	ll.add(right.get(j));
	        j++;
	    }
		
	}

}
