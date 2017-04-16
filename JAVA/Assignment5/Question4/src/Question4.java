import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

/**
 * @author Varun Ramani
 *
 */

/*
 * 4) Write a file copy program using unicode character streams. ( FileWriter
 * and FileReader )
 */

public class Question4 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Integer input;
		try (FileWriter fw = new FileWriter("Test.txt")) {
			while (true) {
				input = sc.nextInt();
				if (input == 0) {
					break;
				}
				fw.append(input.toString());
			}
		} catch (Exception e) {
			e.printStackTrace();
		}

		try (FileReader fr = new FileReader("Test.txt")) {
			char[] a = new char[50];
			fr.read(a);
			try (FileWriter fw = new FileWriter("Test2.txt")) {
				fw.write(a);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

}
