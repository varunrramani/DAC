import java.io.RandomAccessFile;
import java.util.Scanner;

/**
 * @author Varun Ramani
 *
 */

/*
 * 5) using RandomAccessFile class create a file. accept a message from user and
 * write in a file. now read the message which u have stored in a file. now
 * again accept a message and write in a file at the end of existing message.
 * now read the entire content of file . ( u should be able to read both the
 * messages now)
 */

public class Question5 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		try (RandomAccessFile raf = new RandomAccessFile("Test.txt", "rw")) {
			raf.seek(raf.length());
			byte b[] = new byte[200];
			System.out.println("Enter Data");
			int k = System.in.read(b);
			raf.write(b, 0, k);
			raf.seek(0);
			byte c[] = new byte[(int) raf.length()];
			raf.read(c);
			String ss = new String(c);
			System.out.println(ss);
			raf.seek(raf.length());
			System.out.println("Enter data again");
			k = System.in.read(b);
			raf.write(b, 0, k);
			System.out.println("Reading whole data");
			raf.seek(0);
			c = new byte[(int) raf.length()];
			raf.read(c);
			ss = new String(c);
			System.out.println(ss);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
