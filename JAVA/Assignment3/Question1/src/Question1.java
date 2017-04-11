/**
 * @author Varun Ramani
 *
 */

/*
 * 1)Create abstract base class "Game" with 'play()' as abstract method. From
 * that derive following classes. Football,Cricket,Tennis Create a class called
 * as "GamesDemo" (public class) inside a main method create an array of "Game"
 * (3 elements) Store objects of Football,Cricket and Tennis respectively. Now
 * traverse the array and call that Cricket's play() method.
 */

abstract class Game {
	public abstract void play();
}

class Football extends Game {

	@Override
	public void play() {
		System.out.println("Football Play");
	}
}

class Cricket extends Game {

	@Override
	public void play() {
		System.out.println("Cricket Play");
	}
}

class Tennis extends Game {

	@Override
	public void play() {
		System.out.println("Tennis Play");
	}

}

public class Question1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Game game[] = new Game[3];
		game[0] = new Cricket();
		game[1] = new Football();
		game[2] = new Tennis();
		for (int i = 0; i < game.length; i++) {
			if (game[i] instanceof Cricket) {
				game[i].play();
			}
		}
	}

}
