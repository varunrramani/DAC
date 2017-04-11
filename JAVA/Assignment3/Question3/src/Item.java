/**
 * @author Varun Ramani
 *
 */
public class Item {
	private String itemId, itemName;
	private int itemCost;
	/**
	 * @param itemId
	 * @param itemName
	 * @param itemCost
	 */
	public Item(String itemId, String itemName, int itemCost) {
		super();
		this.itemId = itemId;
		this.itemName = itemName;
		this.itemCost = itemCost;
	}
	
	public void disp() {
		System.out.println("Item id\tItem Name\tItem Cost");
		System.out.println(itemId + "\t" + itemName + "\t\t" + itemCost);
	}
}
