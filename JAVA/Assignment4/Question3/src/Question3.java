/**
 * @author Varun Ramani
 *
 */
/*
 * 3) create 3 threads in such a way that while one thread is executing, 2
 * threads cannot interfere. they should display output "Exec  0" to "Exec 5".
 */

class SynchronisedDemo implements Runnable {

	@Override
	synchronized public void run() {
		// TODO Auto-generated method stub
		synchronized (this) {
			for (int i = 0; i < 6; i++) {
				System.out.println("Exec " + i);
			}
		}
	}
	
	/*@Override
	 synchronized  public void run() {
		// TODO Auto-generated method stub
		synchronized (this) {
			for (int i = 0; i < 6; i++) {
				System.out.println("Exec " + i);
			}
		}
	}*/

}

public class Question3 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SynchronisedDemo synchronisedDemo = new SynchronisedDemo();
		Thread t1 = new Thread(synchronisedDemo);
		Thread t2 = new Thread(synchronisedDemo);
		Thread t3 = new Thread(synchronisedDemo);
		t1.start();
		t2.start();
		t3.start();
	}

}
