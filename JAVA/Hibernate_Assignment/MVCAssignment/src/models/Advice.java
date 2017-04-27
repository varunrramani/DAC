package models;

/**
 * @author Varun Ramani
 *
 */
public class Advice {
	public String getAdvice(String qualification) {
		if (qualification.equalsIgnoreCase("engineering")) {
			return "You are gone!";
		} else if (qualification.equalsIgnoreCase("ca")) {
			return "Gone";
		} else {
			return "No idea";
		}
	}
}
