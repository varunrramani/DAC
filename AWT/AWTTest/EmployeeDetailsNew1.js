"use strict"
class Employee {
    static empId() {
        this.eId = ++this.eId || 1;
        return this.eId;
    }

    constructor(name, salary) {
        if(new.target === Account) {
            throw new Error("Cannot create object of Abstract class");
        }
        this._id = Employee.empId();
        this._name = name;
        this._salary = salary;
    }

    get EmployeeID() {
        return this._id;
    }

    get EmployeeName() {
        return this._name;
    }

    set EmployeeName(value) {
        this._name = value;
    }

    get EmployeeSalary() {
        return this._salary;
    }

    set EmployeeSalary(value) {
        this._salary = value;
    }

    toString() {
        return "Name: " + this.EmployeeName + "<br>ID: " + this.EmployeeID + "<br>Total Salary: " + this.calculateSalary() + "<br><br>";
    }
}

class PermanentEmployee extends Employee {
    constructor(name, salary) {
        super(name, salary);
        this._type = "Permanent Employee";
        this._bonus = salary * 0.1;
    }

    get EmployeeType() {
        return this._type;
    }

    get EmployeeBonus() {
        return this._bonus;
    }

    calculateSalary() {
        return this.EmployeeSalary + this.EmployeeBonus;
    }
}

class TemporaryEmployee extends Employee {
    constructor(name, salary) {
        super(name, salary);
        this._type = "Permanent Employee";
        this._incentive = salary * 0.05;
    }

    get EmployeeType() {
        return this._type;
    }

    get EmployeeIncentive() {
        return this._incentive;
    }

    calculateSalary() {
        return this.EmployeeSalary + this.EmployeeIncentive;
    }
}