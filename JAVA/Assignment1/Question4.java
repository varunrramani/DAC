public class Question4 {
	public static void main(String[] args) {
		int i = 3;
		int j = 3;
		while (j <= 30) {
			if (j != 24) {
				System.out.println(j);
			}
			i++;
			j = i;
		}
	}
}