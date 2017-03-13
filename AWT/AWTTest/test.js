"use strict"
var i = 0;
function Employee(name, salary) {
	++i;
	if (i <= 2) {
	Employee.id = ++Employee.id || 1;
		Employee.company = "Developers Private ltd.";
		this.name = name;
		this.id = Employee.id;
		this.salary = salary;

	}
}
Employee.prototype.toString = function () {
	return "Employee Details <br/>" + Employee.company + " Name : " + this.name + "<br/>Id : " + this.id + "<br/>Salary : " + this.salary + "<br/><br/>";
}

function P_emp(name, salary) {
	Employee.call(this, name, salary);
	this.type = "Permanant Employee";
	this.bonus = function () { return this.salary * 0.1; }
	P_emp.prototype = Object.create(Employee.prototype);
	P_emp.prototype.constructor = P_emp;
}
P_emp.prototype.calsal = function () { return this.salary + this.bonus(); }
P_emp.prototype.toString = function () {
	return "Employee Details <br/>" + Employee.company + "<br /> Name : " + this.name + "<br/>Id : " + this.id + "<br/>Employee Type :" + this.type + "<br/>Salary : " + this.salary + "<br/>Bonus : " + this.bonus() + "<br/>Total Salary : " + this.calsal() + "<br/><br/>";
}

function T_emp(name, salary) {
	Employee.call(this, name, salary);
	this.type = "Temporary Employee";
	this.incentive = function () { return this.salary * 0.05; }
	T_emp.prototype = Object.create(Employee.prototype);
	T_emp.prototype.constructor = T_emp;
}
T_emp.prototype.caltsal = function () { return this.salary + this.incentive(); }
T_emp.prototype.toString = function () {
	return "Employee Details <br/>" + Employee.company + "<br /> Name : " + this.name + "<br/>Id : " + this.id + "<br/>Employee Type :" + this.type + "<br/>Salary : " + this.salary + "<br/>Incentive : " + this.incentive() + "<br/>Total Salary : " + this.caltsal(); +"<br/><br/>"
}
