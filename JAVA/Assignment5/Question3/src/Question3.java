import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

/**
 * @author Varun Ramani
 *
 */

/*
 * 3) write a file copy program using byte streams. 
 * (FileOutputStream and FileInputStream)
 */

public class Question3 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Integer input;
		System.out.println("Enter number(0 to exit)");
		try (FileOutputStream fos = new FileOutputStream("test.txt")) {
			//try (DataOutputStream dos = new DataOutputStream(fos)) {
				while (true) {
					input = sc.nextInt();
					if (input == 0) {
						break;
					}
					fos.write(input);
				}
			//}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		try (FileInputStream fis = new FileInputStream("test.txt")) {
			while (fis.available() != 0) {
				//System.out.println(fis.read());
				try (FileOutputStream fos = new FileOutputStream("test2.txt", true)) {
					fos.write(fis.read());
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		try (FileInputStream fis = new FileInputStream("test2.txt")) {
			while (fis.available() != 0) {
				System.out.println(fis.read());
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		
	}

}
