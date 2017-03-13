"use strict"
function Account(name) {
    Account.bankName = "Bank Name";
    Account.accountID = ++Account.accountID || 1;
    this.ID = Account.accountID;
    this.name = name;
}

Account.prototype.balance = 0;

Account.prototype.deposit = function (depositAmount) {
    this.balance += depositAmount;
}

Account.prototype.toString = function () {

    return("<br />Bank Name: " + Account.bankName 
    + "<br />Account Number: " + this.ID 
    + "<br/>Name: " + this.name 
    + "<br />Balance: " + this.balance + "<br /><br /><br />");
}

function CurrentAccount(name) {
    Account.call(this, name);
}

CurrentAccount.prototype = Object.create(Account.prototype);
CurrentAccount.prototype.constructor = CurrentAccount;

CurrentAccount.prototype.withdraw = function (withdrawAmount) {
    this.balance -= withdrawAmount;
}

function SavingAccount(name) {
    Account.call(this, name);
}

SavingAccount.prototype = Object.create(Account.prototype);
SavingAccount.prototype.constructor = SavingAccount;

SavingAccount.prototype.withdraw = function (withdrawAmount) {
    if (this.balance < withdrawAmount) {
        alert("Withdraw amount greater than available balance");
    } else {
        this.balance -= withdrawAmount;
    }
}