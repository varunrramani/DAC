package models;

import javax.persistence.*;

/**
 * @author Varun Ramani
 *
 */
@Entity
public class Product {
	int pId, qty, price;
	String pName;

	/**
	 * 
	 */
	public Product() {

	}

	/**
	 * @param qty
	 * @param price
	 * @param pName
	 */
	public Product(int qty, int price, String pName) {
		this.qty = qty;
		this.price = price;
		this.pName = pName;
	}

	/**
	 * @return the pId
	 */
	@Id
	@Column(name = "id")
	@GeneratedValue(strategy = GenerationType.AUTO)
	public int getpId() {
		return pId;
	}

	/**
	 * @param pId
	 *            the pId to set
	 */
	public void setpId(int pId) {
		this.pId = pId;
	}

	/**
	 * @return the qty
	 */
	@Column(name = "Quantity")
	public int getQty() {
		return qty;
	}

	/**
	 * @param qty
	 *            the qty to set
	 */
	public void setQty(int qty) {
		this.qty = qty;
	}

	/**
	 * @return the price
	 */
	@Column(name = "Price")
	public int getPrice() {
		return price;
	}

	/**
	 * @param price
	 *            the price to set
	 */
	public void setPrice(int price) {
		this.price = price;
	}

	/**
	 * @return the pName
	 */
	@Column(name = "Name")
	public String getpName() {
		return pName;
	}

	/**
	 * @param pName
	 *            the pName to set
	 */
	public void setpName(String pName) {
		this.pName = pName;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Object#toString()
	 */
	@Override
	public String toString() {
		return "Product [qty=" + qty + ", price=" + price + ", pName=" + pName + "]";
	}

}
