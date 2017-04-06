/*
5) Define a class "Emp" with private static member "int cnt".
How will u make sure that outsiders can read the value of cnt ?
*/
class Emp {
	private static int cnt = 100;

	public static int getCnt() {
		return cnt;
	}
}

public class Question5 {
	public static void main(String[] args) {
		System.out.println("Value for cnt: " + Emp.getCnt());
	}
}