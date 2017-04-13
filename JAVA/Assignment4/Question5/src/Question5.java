/**
 * @author Varun Ramani
 *
 */
/*
 * 5) create 2 threads one thread will display 1 to 50 second thread will
 * display 50 to 1 both the threads should start simultaneously.
 * 
 * (use implements method)
 */

class Thread1 implements Runnable {

	@Override
	public void run() {
		for(int i = 1; i <=50; i++) {
			System.out.println(Thread.currentThread() + " " + i);
		}
	}
}

class Thread2 implements Runnable {

	@Override
	public void run() {
		for (int i = 50; i > 0; i--) {
			System.out.println(Thread.currentThread() + " " + i);
		}
	}

}

public class Question5 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Thread1 thread1 = new Thread1();
		Thread2 thread2 = new Thread2();
		Thread t1 = new Thread(thread1);
		Thread t2 = new Thread(thread2);
		t1.setName("Thread 1");
		t1.start();
		t2.setName("Thread 2");
		t2.start();
	}

}
