import java.util.*;
public class Swap{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		int a=scanner.nextInt();
		int b=scanner.nextInt();
		System.out.println("Before swaping a="+a+" b="+b);	
		swaping(a,b);
	}
	public static void swaping(int a,int b){
		a=a+b;
		b=a-b;
		a=a-b;
	System.out.println("After swaping a="+a+" b="+b);	
}
}
