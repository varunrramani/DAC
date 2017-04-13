/**
 * @author Varun Ramani
 *
 */
/*
 * 4)create 2 threads. Write a program which displays number 1 to 10 using class
 * lock. [hint:- use "implements Runnable" and synchronized block]
 */
public class Question4 implements Runnable {
	static Class question4;

	static void disp() {
		synchronized (question4) {
			for (int i = 1; i <= 10; i++) {
				System.out.println(i);
			}
		}
	}

	/*synchronized static void disp() { 
		// synchronized (question4) {
		for (int i = 1; i <= 10; i++) {
			System.out.println(i);
		}
		//}
	}*/

	@Override
	public void run() {
		// TODO Auto-generated method stub
		disp();
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		/*
		 * Question4 question4 = new Question4(); Question4 question42 = new
		 * Question4();
		 */

		// Thread t1 = new Thread(question4);
		// Thread t2 = new Thread(question42);
		// t1.start();
		// t2.start();
		try {
			question4 = Class.forName("Question4");
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		Question4 question4 = new Question4();
		Question4 question42 = new Question4();
		Thread t1 = new Thread(question4);
		Thread t2 = new Thread(question42);
		t1.start();
		t2.start();
	}
}
