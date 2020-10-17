QUES-
 Demonstrate multithreading by creating two threads, one for printing the odd numbers and the other for printing even numbers with in a given range of your choice
 
 CODE-
 
 import java.util.Scanner;

class ODDEVENDISPLAYQ1 implements Runnable{
 
	Scanner myObj = new Scanner(System.in);
	public int DisplayUpto= myObj.nextInt();
	static int  number=1;
	int remdr;
	static Object lock=new Object();
 
	ODDEVENDISPLAYQ1(int remdr)
	{
		this.remdr=remdr;
	}
 
	@Override
	public void run() {
		while (number < DisplayUpto) {
			synchronized (lock) {
				while (number % 2 != remdr) { 
					try {
						lock.wait();
					} catch (InterruptedException e) {
						e.printStackTrace(); }}
				System.out.println(Thread.currentThread().getName() + " " + number);
				number++;
				lock.notifyAll();}}
				}}
				
public class MULTRITHREEAD_Q1_BCI0184SAURABHSINGH {
	public static void main(String[] args) {
		System.out.println("Enter number till you want to print in ODD and EVEN: ");

		ODDEVENDISPLAYQ1 ODD=new ODDEVENDISPLAYQ1(1);
		ODDEVENDISPLAYQ1 EVEN=new ODDEVENDISPLAYQ1(0);

		Thread t1=new Thread(ODD,"Odd");
		Thread t2=new Thread(EVEN,"Even");
		
		t1.start();
		t2.start();
	}
}
