package models;

import java.util.Set;

import javax.persistence.*;

/**
 * @author Varun Ramani
 *
 */
@Entity
public class Course {
	int id;
	private String name;
	Set<Module> modules;

	/**
	 * 
	 */
	public Course() {
	}

	/**
	 * @param name
	 * @param modules
	 */
	public Course(String name, Set<Module> modules) {
		this.name = name;
		this.modules = modules;
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

	/**
	 * @return the modules
	 */
	@OneToMany(cascade = CascadeType.ALL)
	public Set<Module> getModules() {
		return modules;
	}

	/**
	 * @param modules
	 *            the modules to set
	 */
	public void setModules(Set<Module> modules) {
		this.modules = modules;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Object#toString()
	 */
	@Override
	public String toString() {
		return "Course [name=" + name + ", modules=" + modules + "]";
	}

}
