/*
2) create a class "DemoArr",with the function "disp". create 4 objects of this class in an array.
Traverse the array and invoke "disp" on each objects.
*/

public class Question2 {
	void disp(int objectNo) {
		System.out.println("Inside disp of object " + objectNo);
	}

	public static void main(String[] args) {
		Question2 arr[] = new Question2[4];
		arr[0] = new Question2();
		arr[1] = new Question2();
		arr[2] = new Question2();
		arr[3] = new Question2();

		for (int i = 0; i < arr.length; i++) {
			arr[i].disp(i);
		}
	}
}