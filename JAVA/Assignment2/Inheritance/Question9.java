/*
9) create interface "Game" , have an abstract method "play()". from this interface define "Cricket" , "FootBall" and "Tennis".
Now Define one more class 
public class Demo
In this class have a method "perform" which will take interface reference as parameter.inside "perform()" see to it that any child object passed,
its "play()" method should be invoked.
*/
interface Game {
	void play();
}

class Cricket implements Game {
	@Override
	public void play() {
		System.out.println("Cricket play");
	}
}

class FootBall implements Game {
	@Override
	public void play() {
		System.out.println("FootBall play");
	}
}

class Tennis implements Game {
	@Override
	public void play() {
		System.out.println("Tennis play");
	}
}

public class Question9 {
	public static void main(String[] args) {
		Game g1 = new Cricket();
		Game g2 = new FootBall();
		Game g3 = new Tennis();
		g1.play();
		g2.play();
		g3.play();
	}
}