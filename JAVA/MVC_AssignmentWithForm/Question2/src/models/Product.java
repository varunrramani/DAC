package models;

import javax.persistence.*;

/**
 * @author Varun Ramani
 *
 */
@Entity
public class Product {
	Integer pId, qty, price;
	String name;

	/**
	 * @return the pId
	 */
	@Id
	@GeneratedValue(strategy = GenerationType.AUTO)
	@Column(name = "ID")
	public Integer getpId() {
		return pId;
	}

	/**
	 * @param pId
	 *            the pId to set
	 */
	public void setpId(Integer pId) {
		this.pId = pId;
	}

	/**
	 * @return the qty
	 */
	@Column(name = "Quantity")
	public Integer getQty() {
		return qty;
	}

	/**
	 * @param qty
	 *            the qty to set
	 */
	public void setQty(Integer qty) {
		this.qty = qty;
	}

	/**
	 * @return the price
	 */
	@Column(name = "Price")
	public Integer getPrice() {
		return price;
	}

	/**
	 * @param price
	 *            the price to set
	 */
	public void setPrice(Integer price) {
		this.price = price;
	}

	/**
	 * @return the name
	 */
	@Column(name = "Name")
	public String getName() {
		return name;
	}

	/**
	 * @param name
	 *            the name to set
	 */
	public void setName(String name) {
		this.name = name;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Object#toString()
	 */
	@Override
	public String toString() {
		return "qty=" + qty + ", price=" + price + ", name=" + name + "";
	}

}
