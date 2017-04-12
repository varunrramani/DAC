/**
 * @author Varun Ramani
 *
 */

/*
 * 1) create a multi-threaded application by using "extends Thread "
 * method.create 2 threads. they should display characters from A to J.
 */

class ThreadDemo extends Thread {
	@Override
	public void run() {
		//super.run();
		for (char ch = 'A'; ch <= 'J'; ch++) {
			System.out.println(ch);
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}
public class Question1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ThreadDemo threadDemo = new ThreadDemo();
		threadDemo.start();
	}

}
