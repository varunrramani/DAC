"use strict"
class Employee {
    static sEID () {
        this.eId = ++this.eId || 1;
        return this.eId;
    }

    constructor(name, salary) {
        if (new.target === Employee) {
            throw new Error ("Cannot create object of Abstract Class");
        }
        this.ID = Employee.sEID();
        this.name = name;
        this.salary = salary;
    }
}