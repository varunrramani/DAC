import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.util.Scanner;

/**
 * @author Varun Ramani
 *
 */

/*
 * 1) accept as many as numbers from user till he presses "0" and write these
 * numbers in a file. Now Open a file and read these numbers. ( Hint :- use
 * Scanner class for input, FileOutputStream, DataOutputStream, FileInputStream
 * , DataInputStream)
 */

public class Question1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		Integer input;
		System.out.println("Enter number(0 to exit)");
		try (FileOutputStream fos = new FileOutputStream("test.txt")) {
			try (DataOutputStream dos = new DataOutputStream(fos)) {
				while (true) {
					input = sc.nextInt();
					if (input == 0) {
						break;
					}
					dos.writeInt(input);
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		try (FileInputStream fis = new FileInputStream("test.txt")) {
			try (DataInputStream dis = new DataInputStream(fis)) {
				while (true) {
					if (dis.available() != 0) {
						System.out.println(dis.readInt());
					}
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
