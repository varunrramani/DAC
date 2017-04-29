package models;

import javax.persistence.*;

/**
 * @author Varun Ramani
 *
 */
@Entity
public class Module {
	private int id;
	private String name;

	/**
	 * 
	 */
	public Module() {
	}

	/**
	 * @param name
	 */
	public Module(String name) {
		this.name = name;
	}

	/**
	 * @return the id
	 */
	@Id
	@GeneratedValue(strategy = GenerationType.AUTO)
	public int getId() {
		return id;
	}

	/**
	 * @param id
	 *            the id to set
	 */
	public void setId(int id) {
		this.id = id;
	}

	/**
	 * @return the name
	 */
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
		return "Module [name=" + name + "]";
	}

}
