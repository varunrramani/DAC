/**
 * @author Varun Ramani
 *
 */

/*
 * 3) create a hierarchy as follows interface Game- play() method Derive at
 * least 3 classes from it. Now Create generic class which can take Game type
 * (i.e. any sub type of Game) as parameter. In this class try to call the
 * play() method of the class which is passed to it.
 */

interface Game {
	void play();
}

class Cricket implements Game {

	@Override
	public void play() {
		System.out.println("Cricket Play");
	}
}

class Football implements Game {

	@Override
	public void play() {
		System.out.println("Football Play");	
	}
}

class Tennis implements Game {

	@Override
	public void play() {
		System.out.println("Tennis Play");	
	}
}

class Generic<T extends Game> {
	T type;
	
	public Generic(T type) {
		this.type = type;
	}
	
	public void callPlay() {
		type.play();
	}
}

public class Question3 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Generic g1 = new Generic(new Cricket());
		Generic g2 = new Generic(new Tennis());
		Generic g3 = new Generic(new Football());
		g1.callPlay();
		g2.callPlay();
		g3.callPlay();
	}

}
