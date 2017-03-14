"use strict"
class Account {
    static accid() {
        this.dd = ++this.dd || 1;
        return this.dd;
    }

    constructor(name, balance) {
        if(new.target === Account) {
            throw new Error("Cannot create object of Abstract class");
        }
        this._id = Account.accid();
        this._name = name;
        this._balance = balance;
    }

    get AccountName() {
        return this._name;
    }

    set AccountName(value) {
        this._name = value;
    }

    get AccountId() {
        return this._id;
    }

    get AccountBalance() {
        return this._balance;
    }

    deposit(amount) {
        this._balance += amount;
    }

    toString() {
        return "Name: " + this.AccountName + "<br />Account no.: " + this.AccountId + "<br/>Balance: " + this.AccountBalance + "<br/>";
    }
}

class SavingAccount extends Account {
    constructor(name, balance) {
        super(name, balance);
    }

    withdraw(amount) {
        const minBalance = 10000;
        var remBalance = this.AccountBalance - amount;
        if (remBalance < minBalance) {
            throw new Error("Transaction failed. You need minimum balance of 10000 after Transaction");
        }
        this._balance -= amount;
    }
}

class CurrentAccount extends Account {
    constructor(name, balance) {
        super(name, balance);
    }

    withdraw(amount) {
        this._balance -= amount;
    }
}