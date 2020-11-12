
import java.io.*; 

class Smallest 
{ 
	static void findSmallest(int n) 
	{ 
		int i, j=0; 
		int MAX = 50; 
		int[] res = new int[MAX]; 

		if (n < 10) 
		{ 
			System.out.println(n+10); 
			return; 
		} 

		for (i=9; i>1; i--) 
		{ 
			while (n%i == 0) 
			{ 
				n = n/i; 
				res[j] = i; 
				j++; 
			} 
		} 

		// are greater than 9) 
		if (n > 10) 
		{ 
			System.out.println("Not possible"); 
			return; 
		} 

		for (i=j-1; i>=0; i--) 
			System.out.print(res[i]); 
		System.out.println(); 
	} 
	
	public static void main (String[] args) 
	{ 
		findSmallest(7); 
		findSmallest(36); 
		findSmallest(13); 
		findSmallest(100); 
	} 
} 
