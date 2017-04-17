import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;
import java.util.Set;

/**
 * @author Varun Ramani
 *
 */

/*
 * 2) create a HashMap. store prn no. and students name of 10 students inside
 * the HashMap. display it using iterator.
 */

public class Question2 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		HashMap<Integer, String> map = new HashMap<>();
		System.out.println("Enter Details of 10 Students");
		Scanner sc = new Scanner(System.in);
		int prn;
		String name;
		for (int i = 0; i < 10; i++) {
			System.out.print("Enter PRN: ");
			prn = sc.nextInt();
			
			System.out.print("Enter Name: ");
			name = sc.next();
			
			map.put(prn, name);
		}
		
		Set set = map.entrySet();
		
		Iterator i = set.iterator();
		
		while (i.hasNext()) {
			Map.Entry m = (Entry) i.next();
			System.out.print(m.getKey() + " ");
			System.out.println(m.getValue());
		}
	}

}
