public class Question2 {
	public static void main(String[] args) {
		int length = args.length;
		System.out.println(length);
		for (int i = 0; i < length; i++) {
			switch(args[i]) {
				case "a":
				case "e":
				case "i":
				case "o":
				case "u":
					System.out.println(args[i] + " is a vowel");
					break;
				default:
					System.out.println(args[i] + " is a consonant");
			}
		}
	}
}