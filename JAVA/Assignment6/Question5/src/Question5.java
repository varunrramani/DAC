import java.util.HashMap;
import java.util.Scanner;

/**
 * @author Varun Ramani
 *
 */

/*
 * 5) maintain ICC ranking of at least 5 batsmen in the "HashMap". list should
 * be maintain as "rank" "name" e.g. "1" "Sachin Tendulkar". Now ask any rank
 * bet'n 1 to 5 from user. ( user input). if user asks for a particular rank ,
 * retrieve batsman name for that rank from the HashMap.
 */

public class Question5 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		HashMap<Integer, String> map = new HashMap<>();
		map.put(1, "Sachin Tendulkar");
		map.put(2, "ABC");
		map.put(3, "XYZ");
		map.put(4, "PQR");
		map.put(5, "IJK");
		
		int rank;
		Scanner rankInput = new Scanner(System.in);
		System.out.println("Enter Rank to find the Batsman(1-5) (0 to exit)");
		while (true) {
			rank = rankInput.nextInt();
			if (rank == 0) {
				break;
			}
			
			System.out.println(map.get(rank));
		}
	}

}
