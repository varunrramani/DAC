using System;

namespace AccountFinal
{
    [Serializable]
    class SavingAccount : Account
    {
        String type;
        public SavingAccount(String name, Double balance, String type)
            : base(name, balance)
        {
            this.type = type;
        }

        public override void Withdraw(int amount)
        {
            WithdrawEvent withdrawEvent = new WithdrawEvent();
            if (Balance - amount < 10000)
            {
                withdrawEvent.withdrawEventHandler += WithdrawFailed;
                withdrawEvent.onWithdraw(this.Name, this.Balance);
                throw new WithdrawException("Balance cannot be less than 10000", Name, Balance);
            }
            if (amount < 0)
            {
                withdrawEvent.withdrawEventHandler += WithdrawFailed;
                withdrawEvent.onWithdraw(this.Name, this.Balance);
                throw new WithdrawException("Amount cannot be less than 0", Name, Balance);
            }
            Balance = Balance - amount;
            withdrawEvent.withdrawEventHandler += WithdrawSuccessful;
            withdrawEvent.onWithdraw(this.Name, this.Balance);

        }
    }
}
