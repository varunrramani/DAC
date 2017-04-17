import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

/**
 * @author Varun Ramani
 *
 */

/*
 * 1) create a class "MyClass". create 5 different objects of it. add them in a
 * ArrayList. store ArrayList in file. Now open a file, read ArrayList and
 * display all objects.
 */

class MyClass implements Serializable {
	int num;

	public MyClass() {
		// TODO Auto-generated constructor stub
	}

	public MyClass(int num) {
		this.num = num;
	}

	@Override
	public String toString() {
		return "Num is: " + num;
	}
}

public class Question1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		List<MyClass> list = new ArrayList<MyClass>();
		for (int i = 0; i < 5; i++) {
			list.add(new MyClass(i + 1));
		}

		try (FileOutputStream fos = new FileOutputStream("test.txt")) {
			try (ObjectOutputStream oos = new ObjectOutputStream(fos)) {
				oos.writeObject(list);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}

		try (FileInputStream fis = new FileInputStream("test.txt")) {
			try (ObjectInputStream ois = new ObjectInputStream(fis)) {
				//while (ois.available() != 0) {

					List<MyClass> readList = (List<MyClass>) ois.readObject();
					System.out.println(readList);
					if (readList != null) {
						for (int i = 0; i < readList.size(); i++) {
							System.out.println(readList.get(i));
						}
					}

				//}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
