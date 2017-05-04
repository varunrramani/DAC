package controllers;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.orm.hibernate3.HibernateTemplate;
import org.springframework.stereotype.Component;

import interfaces.EmployeeDAO;
import models.Employee;

/**
 * @author Varun Ramani
 *
 */
@Component
public class EmployeeDAOImpl implements EmployeeDAO {

	@Autowired
	private HibernateTemplate hibernateTemplate;

	@Override
	public void add(Employee employee) {
		hibernateTemplate.save(employee);
	}

}
