/**
 * 
 */

/**
 * @author Varun Ramani
 *
 */
public class Calculator {
	public int calcDouble(int num) throws MyArithException {
		if (num == 0) {
			throw new MyArithException("Number cannot be 0");
		} else if (num < 0) {
			throw new MyArithException("Number cannot be negative");
		}
		return num * 2;
	}
}
