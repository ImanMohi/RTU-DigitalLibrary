QUES

Write an application that executes two threads. One thread displays ―An “HELLO” every 1000 milliseconds and other displays ―” WELCOME TO VIT” every 3000 milliseconds. Create the threads by extending the Thread class.


CODE-


public class SAURABHSINGH_19BCI0184MULTITHREAD0 extends Thread{
    public void run() {
        
        for(int i = 0; i<8 ; i++){
            System.out.println("Hello, My Name is Saurabh Singh");
            try {
                Thread.sleep(1000);
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
    
    public static void main(String[] args) throws Exception {
        Thread t1 = new Thread(new SAURABHSINGH_19BCI0184MULTITHREAD0());
        t1.start();
        
        Thread t2 = new Thread(new SAURABHSINGH_19BCI0184MULTITHREAD0());
        t2.start();
    }
}
class MULTITHREAD1 extends Thread {
    public void run() {
        
        for(int i = 0; i<5 ; i++){
            System.out.println("Welcome to VIT");
            try {
                Thread.sleep(3000);
            } catch (Exception e) {
                System.out.println(e);
            }}
}}
